//
// Created by leega on 10/30/2019.
//
#include <iostream>

int boj1712() {
    int A, B, C, cost;
    std::cin >> A >> B >> C;
    cost = C - B;
    if (cost <= 0) std::cout << -1;
    else std::cout << A / cost + 1;
    return 0;
}

