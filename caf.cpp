#include <cstdlib>
#include <string>
#include <iostream>

typedef long long int lint;

lint get_integer(char symb) {
    if (symb >= '0' && symb <= '9') {
        return symb - '0';
    } else if (symb >= 'A' && symb <= 'Z') {
        return symb - 'A' + 10;
    } else {
        std::cout << "Error: wrong symbol." << std::endl;
    }
}

lint fact(lint n) {
    lint j = 1;
    for (lint i = 1; i <= n; i++) {
        j *= i;
    }
    return j;
}

lint tofact_trans(std::string str) {
    lint ans = 0;
    for (lint i = str.length() - 1; i >= 0; i--) {
        ans += get_integer(str[i]) * fact(str.length() - i);
    }
    return ans;
}

int main() {
    std::string str;
    std::cin >> str;
    std::cout << tofact_trans(str) << std::endl;
    return 0;
}
