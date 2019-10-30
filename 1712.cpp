//
// Created by leega on 10/30/2019.
//
#include <iostream>

int boj1712() {
    int A, B, C, total, money;
    std::cin >> A >> B >> C;
    int i = 1;
    while (1) {
        total = A + (B * i);
        money = C * i;
        if (money - total < 0) {
            i++;
        } else {
            std::cout << i;
            break;
        }
    }
    return 0;
}

