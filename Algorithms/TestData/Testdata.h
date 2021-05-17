#pragma once

// EUKLID.CPP/.H
//     Testdata for Euklid-Algorithm:
extern constexpr int EUKLID_1m = 49;
extern constexpr int EUKLID_1n = 14;
extern constexpr int EUKLID_1_expected = 7;

extern constexpr int EUKLID_2m = 1898;
extern constexpr int EUKLID_2n = 657;
extern constexpr int EUKLID_2_expected = 73;

extern constexpr int EUKLID_3m = 1548756;
extern constexpr int EUKLID_3n = 174240;
extern constexpr int EUKLID3_expected = 396;

extern constexpr int EUKLID_4m = 435280064;
extern constexpr int EUKLID_4n = 169145048;
extern constexpr int EUKLID4_expected = 8;

//      Testfunction for Euklid-Algorithm
void testEuklid();