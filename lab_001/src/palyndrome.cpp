#include "../include/palyndrome.h"

bool palyndrome(const std::string s) {
    std::string new_s = "";
    for (int i = s.size() - 1; i > -1; i--) {
        new_s += s[i];
    }
    return (s == new_s);
}