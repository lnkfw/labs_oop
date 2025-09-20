#include "../include/palindrome.h"
#include <string>

bool palindrome(const std::string s) {
    int l = 0;
    int r = s.length() - 1;
    while (l < r) {
        if (std::tolower(s[l]) != std::tolower(s[r])) {
            return false;
        }
        l+=1;
        r-=1;
    }
    return true;
}