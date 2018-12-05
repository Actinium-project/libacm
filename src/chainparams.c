/*

 The MIT License (MIT)

 Copyright (c) 2017 Jonas Schnelli

 Permission is hereby granted, free of charge, to any person obtaining
 a copy of this software and associated documentation files (the "Software"),
 to deal in the Software without restriction, including without limitation
 the rights to use, copy, modify, merge, publish, distribute, sublicense,
 and/or sell copies of the Software, and to permit persons to whom the
 Software is furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included
 in all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES
 OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 OTHER DEALINGS IN THE SOFTWARE.

 */

#include <btc/chainparams.h>

const btc_chainparams btc_chainparams_main = {
    "main",
    0x35,
    0x37,
    "acm",
    0xb5,
    0x0488ADE4,
    0x0488B21E,
    {0xfa, 0xc1, 0xb7, 0xd7},
    {0x24, 0xb8, 0x00, 0x8b, 0xe7, 0xfd, 0x5c, 0x03, 0xb6, 0x21, 0xcf, 0xfd, 0xe3, 0xbb, 0xc1, 0x23, 0x66, 0x27, 0x2c, 0x79, 0xbe, 0xa1, 0x49, 0x2f, 0x56, 0x14, 0x37, 0xe2, 0x72, 0x78, 0xd7, 0x28 },
    4334,
    {{"seeder1.shit.supply"}, 0},
};
const btc_chainparams btc_chainparams_test = {
    "testnet",
    0x6f,
    0xc4,
    "tb",
    0xEF,
    0x04358394,
    0x043587CF,
    {0x0b, 0x11, 0x09, 0x07},
    {0x43, 0x49, 0x7f, 0xd7, 0xf8, 0x26, 0x95, 0x71, 0x08, 0xf4, 0xa3, 0x0f, 0xd9, 0xce, 0xc3, 0xae, 0xba, 0x79, 0x97, 0x20, 0x84, 0xe9, 0x0e, 0xad, 0x01, 0xea, 0x33, 0x09, 0x00, 0x00, 0x00, 0x00},
    18333,
    {{"testnet-seed.bitcoin.jonasschnelli.ch"}, 0},
};
const btc_chainparams btc_chainparams_regtest = {
    "regtest",
    0x6f,
    0xc4,
    "bcrt",
    0xEF,
    0x04358394,
    0x043587CF,
    {0xfa, 0xbf, 0xb5, 0xda},
    {0x06, 0x22, 0x6e, 0x46, 0x11, 0x1a, 0x0b, 0x59, 0xca, 0xaf, 0x12, 0x60, 0x43, 0xeb, 0x5b, 0xbf, 0x28, 0xc3, 0x4f, 0x3a, 0x5e, 0x33, 0x2a, 0x1f, 0xc7, 0xb2, 0xb7, 0x3c, 0xf1, 0x88, 0x91, 0x0f},
    18444,
    {0},
};


const btc_checkpoint btc_mainnet_checkpoint_array[] = {
    {0, "28d77872e23714562f49a1be792c276623c1bbe3fdcf21b6035cfde78b00b824", 1524649713, 0x1e0ffff0},
    {100,   "cc732316268fe403d692b4ba04b48c866c357a86d560473ef2a1cea176eea396", 1524691579, 0x1e0ffff0},
    {150,   "ebc507a4e91a6947847a99d46c6765db03679f1e911c5c0236f59f30d62d0fd9", 1524697023, 0x1e0ffff0},
    {300,   "f21218cf0f39cbf23113fe7962860b08292b2c59d6f577b85af5a8280e487289", 1524732325, 0x1e0ffff0},
    {600,   "6cb9d69493db2deac182c8dcd56fd01a44f5e775365f09bd973a427cf729d491", 1524767448, 0x1e0ffff0},
    {900,   "415b1c86d6fef15af7a51dbb5aca8e204ac60454480c1d53b1d14eb034cef0a7", 1524778552, 0x1e0ffff0},
    {1000,  "f1d584601e77187e22daa8d551d8307295474a49a54055a0e3feb182223da7ee", 1524784982, 0x1e0ffff0},
    {1100,  "2fa9d2cb200e033de86488a8b81d8009112f60614a06c803080cf167e99faf90", 1524794463, 0x1e0ffff0},
    {1350,  "90879af3c77512419bf6d3bda0030a0c778e01cac37d5fc3ebbf021b659eb56c", 1524818179, 0x1e0ffff0},
    {8918,  "f73dbfc07ee8275e43d57eb2ca5efb8dd721db8ced5d490502fd8330791957e0", 1525187640, 0x1d2be880},
    {15313, "944690e2499d10b2fad85abe40bd8d96a8e39e4cfc0cf9dd767e4745502d53e8", 1525261139, 0x1d03222f},
    {20554, "2302ebfe233144e3c2453e5b7dbfe1d82ddfed7765e15e29c31585f76fb679a5", 1525336539, 0x1c0c88b0},
    {25000, "910672dd97f309b2b9e31cc1d90c76f0ac3471d28d984c6de2248e90a47e98a4", 1525553989, 0x1c00c88b},
    {30000, "cc690003d9b0106669639e0599e2f36afd196081f341d5c9182f6d89ab6d33c8", 1526431141, 0x1c00dc99},
    {35060, "faa21ea9167dd878dd3789a68455ef035877edcdb96ea15133693ef75de6f4a6", 1527332152, 0x1c00ca35},
    {42384, "26f08f68ff269ae5f98fdb5e484bd9cefabdfd8f01291858909c0f57b1b2ec27", 1527777428, 0x1b09df98},
    {43545, "b4e80c89a411a67b3598891cbe132f6518c5c7a7a47971ba6e35939644a403f3", 1528580493, 0x1b09df98},
    {43700, "11cf0da27f67c1cb0d81b28d238dd28ee1c06d6e5e7c7a96cc1727b9d634d814", 1528865814, 0x1b09df98},
    {79769, "45c689944af98e91071ec5429778b8716b802f9c6632704d29abe34b2f8cc0ae", 1535701674, 0x1c02245a},
    {90690, "b9270df40c471556893a5a6538c20119f03ddf55ec394dd322e4a204be22d7fb", 1537385316, 0x1c00d110},
    {123800, "a9981048eaac207ec6ae84afd3e29d1f4e8c602269564b468ec9bde97b569925", 1542442444, 0x1b715ace}
};
