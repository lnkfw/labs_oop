#include <iostream>
#include "include/palyndrome.h"

int main() {
    std::string s;
    std::cout << "Input string: ";
    std::cin >> s;
    if (palyndrome(s)) {
        std::cout << "YES!" << std::endl;
    } else {
        std::cout << "NO!" << std::endl;
    }
    return 0;
}
