#include <iostream>
#include "include/palindrome.h"

int main() {
    std::string s;
    std::cout << "Input string: ";
    std::cin >> s;
    if (palindrome(s)) {
        std::cout << "YES!" << std::endl;
    } else {
        std::cout << "NO!" << std::endl;
    }
    return 0;
}
