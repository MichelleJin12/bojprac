//
// Created by leega on 10/31/2019.
//
#include <iostream>

int boj2292() {
    int A;
    std::cin >> A;
    if (A%6==0) std::cout << A/6;
    else std::cout << A/6 +1;
    return 0;
}