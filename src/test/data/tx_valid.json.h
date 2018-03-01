namespace json_tests{
std::string tx_valid = "[ [\"The following are deserialized transactions which are valid.\"], [\"They are in the form\"], [\"[[[prevout hash, prevout index, prevout scriptPubKey], [input 2], ...],\"], [\"serializedTransaction, enforceP2SH]\"], [\"Objects that are only a single string (like this one) are ignored\"], [\"The following is 23b397edccd3740a74adb603c9756370fafcde9bcc4483eb271ecad09a94dd63\"], [\"It is of particular interest because it contains an invalidly-encoded signature which OpenSSL accepts\"], [\"See http://r6.ca/blog/20111119T211504Z.html\"], [\"It is also the first OP_CHECKMULTISIG transaction in standard form\"], [[[\"60a20bd93aa49ab4b28d514ec10b06e1829ce6818ec06cd3aabd013ebcdc4bb1\", 0, \"1 0x41 0x04cc71eb30d653c0c3163990c47b976f3fb3f37cccdcbedb169a1dfef58bbfbfaff7d8a473e7e2e6d317b87bafe8bde97e3cf8f065dec022b51d11fcdd0d348ac4 0x41 0x0461cbdcc5409fb4b4d42b51d33381354d80e550078cb532a34bfa2fcfdeb7d76519aecc62770f5b0e4ef8551946d8a540911abe3e7854a26f39f58b25c15342af 2 OP_CHECKMULTISIG\"]], \"0100000001b14bdcbc3e01bdaad36cc08e81e69c82e1060bc14e518db2b49aa43ad90ba26000000000490047304402203f16c6f40162ab686621ef3000b04e75418a0c0cb2d8aebeac894ae360ac1e780220ddc15ecdfc3507ac48e1681a33eb60996631bf6bf5bc0a0682c4db743ce7ca2b01ffffffff0140420f00000000001976a914660d4ef3a743e3e696ad990364e555c271ad504b88ac00000000\", true], [\"The following is a tweaked form of 23b397edccd3740a74adb603c9756370fafcde9bcc4483eb271ecad09a94dd63\"], [\"It has an arbitrary extra byte stuffed into the signature at pos length - 2\"], [[[\"60a20bd93aa49ab4b28d514ec10b06e1829ce6818ec06cd3aabd013ebcdc4bb1\", 0, \"1 0x41 0x04cc71eb30d653c0c3163990c47b976f3fb3f37cccdcbedb169a1dfef58bbfbfaff7d8a473e7e2e6d317b87bafe8bde97e3cf8f065dec022b51d11fcdd0d348ac4 0x41 0x0461cbdcc5409fb4b4d42b51d33381354d80e550078cb532a34bfa2fcfdeb7d76519aecc62770f5b0e4ef8551946d8a540911abe3e7854a26f39f58b25c15342af 2 OP_CHECKMULTISIG\"]], \"0100000001b14bdcbc3e01bdaad36cc08e81e69c82e1060bc14e518db2b49aa43ad90ba260000000004A0048304402203f16c6f40162ab686621ef3000b04e75418a0c0cb2d8aebeac894ae360ac1e780220ddc15ecdfc3507ac48e1681a33eb60996631bf6bf5bc0a0682c4db743ce7ca2bab01ffffffff0140420f00000000001976a914660d4ef3a743e3e696ad990364e555c271ad504b88ac00000000\", true], [\"The following is c99c49da4c38af669dea436d3e73780dfdb6c1ecf9958baa52960e8baee30e73\"], [\"It is of interest because it contains a 0-sequence as well as a signature of SIGHASH type 0 (which is not a real type)\"], [[[\"406b2b06bcd34d3c8733e6b79f7a394c8a431fbf4ff5ac705c93f4076bb77602\", 0, \"DUP HASH160 0x14 0xdc44b1164188067c3a32d4780f5996fa14a4f2d9 EQUALVERIFY CHECKSIG\"]], \"01000000010276b76b07f4935c70acf54fbf1f438a4c397a9fb7e633873c4dd3bc062b6b40000000008c493046022100d23459d03ed7e9511a47d13292d3430a04627de6235b6e51a40f9cd386f2abe3022100e7d25b080f0bb8d8d5f878bba7d54ad2fda650ea8d158a33ee3cbd11768191fd004104b0e2c879e4daf7b9ab68350228c159766676a14f5815084ba166432aab46198d4cca98fa3e9981d0a90b2effc514b76279476550ba3663fdcaff94c38420e9d5000000000100093d00000000001976a9149a7b0f3b80c6baaeedce0a0842553800f832ba1f88ac00000000\", true], [\"A nearly-standard transaction with CHECKSIGVERIFY 1 instead of CHECKSIG\"], [[[\"0000000000000000000000000000000000000000000000000000000000000100\", 0, \"DUP HASH160 0x14 0x5b6462475454710f3c22f5fdf0b40704c92f25c3 EQUALVERIFY CHECKSIGVERIFY 1\"]], \"01000000010001000000000000000000000000000000000000000000000000000000000000000000006a473044022067288ea50aa799543a536ff9306f8e1cba05b9c6b10951175b924f96732555ed022026d7b5265f38d21541519e4a1e55044d5b9e17e15cdbaf29ae3792e99e883e7a012103ba8c8b86dea131c22ab967e6dd99bdae8eff7a1f75a2c35f1f944109e3fe5e22ffffffff010000000000000000015100000000\", true], [\"Same as above, but with the signature duplicated in the scriptPubKey with the proper pushdata prefix\"], [[[\"0000000000000000000000000000000000000000000000000000000000000100\", 0, \"DUP HASH160 0x14 0x5b6462475454710f3c22f5fdf0b40704c92f25c3 EQUALVERIFY CHECKSIGVERIFY 1 0x47 0x3044022067288ea50aa799543a536ff9306f8e1cba05b9c6b10951175b924f96732555ed022026d7b5265f38d21541519e4a1e55044d5b9e17e15cdbaf29ae3792e99e883e7a01\"]], \"01000000010001000000000000000000000000000000000000000000000000000000000000000000006a473044022067288ea50aa799543a536ff9306f8e1cba05b9c6b10951175b924f96732555ed022026d7b5265f38d21541519e4a1e55044d5b9e17e15cdbaf29ae3792e99e883e7a012103ba8c8b86dea131c22ab967e6dd99bdae8eff7a1f75a2c35f1f944109e3fe5e22ffffffff010000000000000000015100000000\", true], [\"The following is f7fdd091fa6d8f5e7a8c2458f5c38faffff2d3f1406b6e4fe2c99dcc0d2d1cbb\"], [\"It caught a bug in the workaround for 23b397edccd3740a74adb603c9756370fafcde9bcc4483eb271ecad09a94dd63 in an overly simple implementation\"], [[[\"b464e85df2a238416f8bdae11d120add610380ea07f4ef19c5f9dfd472f96c3d\", 0, \"DUP HASH160 0x14 0xbef80ecf3a44500fda1bc92176e442891662aed2 EQUALVERIFY CHECKSIG\"], [\"b7978cc96e59a8b13e0865d3f95657561a7f725be952438637475920bac9eb21\", 1, \"DUP HASH160 0x14 0xbef80ecf3a44500fda1bc92176e442891662aed2 EQUALVERIFY CHECKSIG\"]], \"01000000023d6cf972d4dff9c519eff407ea800361dd0a121de1da8b6f4138a2f25de864b4000000008a4730440220ffda47bfc776bcd269da4832626ac332adfca6dd835e8ecd83cd1ebe7d709b0e022049cffa1cdc102a0b56e0e04913606c70af702a1149dc3b305ab9439288fee090014104266abb36d66eb4218a6dd31f09bb92cf3cfa803c7ea72c1fc80a50f919273e613f895b855fb7465ccbc8919ad1bd4a306c783f22cd3227327694c4fa4c1c439affffffff21ebc9ba20594737864352e95b727f1a565756f9d365083eb1a8596ec98c97b7010000008a4730440220503ff10e9f1e0de731407a4a245531c9ff17676eda461f8ceeb8c06049fa2c810220c008ac34694510298fa60b3f000df01caa244f165b727d4896eb84f81e46bcc4014104266abb36d66eb4218a6dd31f09bb92cf3cfa803c7ea72c1fc80a50f919273e613f895b855fb7465ccbc8919ad1bd4a306c783f22cd3227327694c4fa4c1c439affffffff01f0da5200000000001976a914857ccd42dded6df32949d4646dfa10a92458cfaa88ac00000000\", true], [\"The following tests for the presence of a bug in the handling of SIGHASH_SINGLE\"], [\"It results in signing the constant 1, instead of something generated based on the transaction,\"], [\"when the input doing the signing has an index greater than the maximum output index\"], [[[\"0000000000000000000000000000000000000000000000000000000000000100\", 0, \"DUP HASH160 0x14 0xe52b482f2faa8ecbf0db344f93c84ac908557f33 EQUALVERIFY CHECKSIG\"], [\"0000000000000000000000000000000000000000000000000000000000000200\", 0, \"1\"]], \"01000000020002000000000000000000000000000000000000000000000000000000000000000000000151ffffffff0001000000000000000000000000000000000000000000000000000000000000000000006b483045022100c9cdd08798a28af9d1baf44a6c77bcc7e279f47dc487c8c899911bc48feaffcc0220503c5c50ae3998a733263c5c0f7061b483e2b56c4c41b456e7d2f5a78a74c077032102d5c25adb51b61339d2b05315791e21bbe80ea470a49db0135720983c905aace0ffffffff010000000000000000015100000000\", true], [\"An invalid P2SH Transaction\"], [[[\"0000000000000000000000000000000000000000000000000000000000000100\", 0, \"HASH160 0x14 0x7a052c840ba73af26755de42cf01cc9e0a49fef0 EQUAL\"]], \"010000000100010000000000000000000000000000000000000000000000000000000000000000000009085768617420697320ffffffff010000000000000000015100000000\", false], [\"A valid P2SH Transaction using the standard transaction type put forth in BIP 16\"], [[[\"0000000000000000000000000000000000000000000000000000000000000100\", 0, \"HASH160 0x14 0x8febbed40483661de6958d957412f82deed8e2f7 EQUAL\"]], \"01000000010001000000000000000000000000000000000000000000000000000000000000000000006e493046022100c66c9cdf4c43609586d15424c54707156e316d88b0a1534c9e6b0d4f311406310221009c0fe51dbc9c4ab7cc25d3fdbeccf6679fe6827f08edf2b4a9f16ee3eb0e438a0123210338e8034509af564c62644c07691942e0c056752008a173c89f60ab2a88ac2ebfacffffffff010000000000000000015100000000\", true], [\"Tests for CTransaction::CheckTransaction()\"], [\"MAX_MONEY output\"], [[[\"0000000000000000000000000000000000000000000000000000000000000100\", 0, \"HASH160 0x14 0x32afac281462b822adbec5094b8d4d337dd5bd6a EQUAL\"]], \"01000000010001000000000000000000000000000000000000000000000000000000000000000000006e493046022100e1eadba00d9296c743cb6ecc703fd9ddc9b3cd12906176a226ae4c18d6b00796022100a71aef7d2874deff681ba6080f1b278bac7bb99c61b08a85f4311970ffe7f63f012321030c0588dc44d92bdcbf8e72093466766fdc265ead8db64517b0c542275b70fffbacffffffff010040075af0750700015100000000\", true], [\"MAX_MONEY output + 0 output\"], [[[\"0000000000000000000000000000000000000000000000000000000000000100\", 0, \"HASH160 0x14 0xb558cbf4930954aa6a344363a15668d7477ae716 EQUAL\"]], \"01000000010001000000000000000000000000000000000000000000000000000000000000000000006d483045022027deccc14aa6668e78a8c9da3484fbcd4f9dcc9bb7d1b85146314b21b9ae4d86022100d0b43dece8cfb07348de0ca8bc5b86276fa88f7f2138381128b7c36ab2e42264012321029bb13463ddd5d2cc05da6e84e37536cb9525703cfd8f43afdb414988987a92f6acffffffff020040075af075070001510000000000000000015100000000\", true], [\"Coinbase of size 2\"], [\"Note the input is just required to make the tester happy\"], [[[\"0000000000000000000000000000000000000000000000000000000000000000\", -1, \"1\"]], \"01000000010000000000000000000000000000000000000000000000000000000000000000ffffffff025151ffffffff010000000000000000015100000000\", true], [\"Coinbase of size 100\"], [\"Note the input is just required to make the tester happy\"], [[[\"0000000000000000000000000000000000000000000000000000000000000000\", -1, \"1\"]], \"01000000010000000000000000000000000000000000000000000000000000000000000000ffffffff6451515151515151515151515151515151515151515151515151515151515151515151515151515151515151515151515151515151515151515151515151515151515151515151515151515151515151515151515151515151515151515151515151515151ffffffff010000000000000000015100000000\", true]]";
};