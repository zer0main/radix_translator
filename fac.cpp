#include <iostream>

typedef long long int lint;

lint fact(lint n) {
    lint j = 1;
    for (lint i = 1; i <= n; i++) {
        j *= i;
    }
    return j;
}

const char aaa[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

void fact_trans(lint n) {
    lint i = 1;
    while (fact(i) <= n) {
        i++;
    }
    i--;
    while (i != 0) {
        std::cout << aaa[n / fact(i)];
        n = n % fact(i);
        i--;
    }
}

int main() {
    lint a;
    std::cin >> a;
    fact_trans(a);
    std::cout << std::endl;
    return 0;
}
