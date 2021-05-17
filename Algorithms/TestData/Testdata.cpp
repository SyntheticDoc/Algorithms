#include <iostream>
#include "../Algorithms.h"
#include "Testdata.h"

void testEuklid() {
    std::cout << "Testing Euclid's algorithm\n";
    int result;
    
    // Test 1
    std::cout << "Instance 1, m = " << EUKLID_1m << ", n = " << EUKLID_1n;
    result = euklid(EUKLID_1m, EUKLID_1n);
    std::cout << "\n  Result:   " << result;
    std::cout << "\n  Expected: " << EUKLID_1_expected;
    std::cout << "\n  Correct?: ";
    if(result == EUKLID_1_expected) {
        std::cout << "true";
    } else {
        std::cout << "false";
    }

    std::cout << "\n\n" << std::endl;

    // Test 2
    std::cout << "Instance 2, m = " << EUKLID_2m << ", n = " << EUKLID_2n;
    result = euklid(EUKLID_2m, EUKLID_2n);
    std::cout << "\n  Result:   " << result;
    std::cout << "\n  Expected: " << EUKLID_2_expected;
    std::cout << "\n  Correct?: ";
    if(result == EUKLID_2_expected) {
        std::cout << "true";
    } else {
        std::cout << "false";
    }

    std::cout << "\n\n" << std::endl;

    // Test 3
    std::cout << "Instance 3, m = " << EUKLID_3m << ", n = " << EUKLID_3n;
    result = euklid(EUKLID_3m, EUKLID_3n);
    std::cout << "\n  Result:   " << result;
    std::cout << "\n  Expected: " << EUKLID_3_expected;
    std::cout << "\n  Correct?: ";
    if(result == EUKLID_3_expected) {
        std::cout << "true";
    } else {
        std::cout << "false";
    }

    std::cout << "\n\n" << std::endl;

    // Test 4
    std::cout << "Instance 4, m = " << EUKLID_4m << ", n = " << EUKLID_4n;
    result = euklid(EUKLID_4m, EUKLID_4n);
    std::cout << "\n  Result:   " << result;
    std::cout << "\n  Expected: " << EUKLID_4_expected;
    std::cout << "\n  Correct?: ";
    if(result == EUKLID_4_expected) {
        std::cout << "true";
    } else {
        std::cout << "false";
    }

    std::cout << "\n\n" << std::endl;
}