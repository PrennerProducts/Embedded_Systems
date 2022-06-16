//
// Created by McRebel on 01.06.2022.
//

/* and.c */
#include "bitoperations.h"
#include <avr/io.h>

#include <cstdlib>

void bin(int n) {
    int i;
    std::cout << "0";
    for (i = 1 << 30; i > 0; i = i / 2) {
        if ((n & i) != 0) {
            std::cout << "1";
        } else {
            std::cout << "0";
        }
    }
    std::endl(std::cout);
}

int main() {
    int j = 7;
    bin(j);
    SB(j, 5);
    bin(j);
    CB(j, 5);
    bin(j);
    std::cout << IBS(j, 1) << std::endl;
    TB(j, 1);
    std::cout << IBS(j, 1) << std::endl;
    TB(j, 1);
    std::cout << IBS(j, 1) << std::endl;
}