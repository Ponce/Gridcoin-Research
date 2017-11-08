#include "appcache.h"
#include "util.h"
#include "main.h"

#include <boost/algorithm/string.hpp>

namespace
{
    AppCache mvApplicationCache;
}

void WriteCache(
        const std::string& section,
        const std::string& key,
        const std::string& value,
        int64_t locktime)
{
    if (section.empty() || key.empty())
        return;

    mvApplicationCache[section][key] = AppCacheEntry{ value, locktime };
}

AppCacheEntry ReadCache(
        const std::string& section,
        const std::string& key)
{
    if (section.empty() || key.empty())
        return AppCacheEntry{};

    const auto& cache = ReadCacheSection(section);
    auto entry = cache.find(key);
    return entry != cache.end()
                   ? entry->second
                   : AppCacheEntry{};
}

AppCacheSection ReadCacheSection(const std::string& section)
{
    const auto& cache = mvApplicationCache.find(section);
    return cache != mvApplicationCache.end()
        ? cache->second
        : AppCacheSection{};
}

void ClearCache(const std::string& section)
{
    auto cache = mvApplicationCache.find(section);
    if(cache == mvApplicationCache.end())
        return;

    for(auto& item : cache->second)
    {
        AppCacheEntry& entry = item.second;
        entry.value.clear();
        entry.timestamp = 1;
    }
}

void DeleteCache(const std::string& section, const std::string& key)
{
    auto cache = mvApplicationCache.find(section);
    if(cache == mvApplicationCache.end())
       return;

    cache->second.erase(key); 
}

std::string GetListOf(const std::string& section)
{
    return GetListOf(section, 0, 0);
}

std::string GetListOf(
        const std::string& section,
        int64_t minTime,
        int64_t maxTime)
{
    std::string rows;
    for(const auto& item : ReadCacheSection(section))
    {
        const std::string& key = item.first;
        const AppCacheEntry& entry = item.second;

        // Compare age restrictions if specified.
        if((minTime && entry.timestamp <= minTime) ||
           (maxTime && entry.timestamp >= maxTime))
            continue;

        // Skip invalid beacons.
        if (section == "beacon" && Contains("INVESTOR", entry.value))
            continue;

        std::string row = key + "<COL>" + entry.value;
        if (!row.empty())
            rows += row + "<ROW>";
    }

    return rows;
}

size_t GetCountOf(const std::string& section)
{
    const std::string& data = GetListOf(section);
    const std::vector<std::string>& vScratchPad = split(data.c_str(),"<ROW>");
    return vScratchPad.size()+1;
}
