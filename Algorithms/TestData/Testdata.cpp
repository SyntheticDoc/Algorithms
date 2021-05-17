#include <iostream>
#include "../Algorithms.h"
#include "../BasicAlgorithms/Euklid.h"

void testEuklid() {
    std::cout << "Testing Euclid's algorithm\n";

    // Test 1
    std::cout << "Run 1, m = " << EUKLID_1m << ", n = " << EUKLID_1n << "\n";
    std::cout << "  Result: " << euklid(EUKLID_1m, EUKLID_1n);
}