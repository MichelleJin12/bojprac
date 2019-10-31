//
// Created by leega on 10/30/2019.
//
#include <iostream>

int boj2839() {
    int N;
    std::cin >> N;
    if ((N%5)%3||(N%3)%5 != 0) {
        std::cout << -1;
        return 0;
    }
    int A = N/5;
    int B = N%5/3;
    std::cout << A + B;

    return 0;
}