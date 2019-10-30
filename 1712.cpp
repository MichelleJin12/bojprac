//
// Created by leega on 10/30/2019.
//
#include <iostream>

int boj1712() {
    int A, B, C, total, money;
    std::cin >> A >> B >> C;
    int i = 1;
    while(1) {
    total = A + (B * i);
    money = C * i;
    if (total || money >= 2100000000) {
        std::cout << -1;
        break;
    }
    else if (total >= money) {
        i++;
    }
    else {
    std::cout << i;
    break;
    }

