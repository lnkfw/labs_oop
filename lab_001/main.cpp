#include <iostream>
#include <string>

bool is_palyndrome(const std::string s) {
    std::string new_s = "";
    for (int i = s.size() - 1; i > -1; i--) {
        new_s += s[i];
    }
    return (s == new_s);
}

int main() {
    std::string s;
    std::cout << "Input string: ";
    std::cin >> s;
    if (is_palyndrome(s)) {
        std::cout << "YES!" << std::endl;
    } else {
        std::cout << "NO!" << std::endl;
    }
    return 0;
}
