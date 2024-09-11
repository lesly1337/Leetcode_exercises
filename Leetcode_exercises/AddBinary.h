//STATUS: WORKING
#pragma once

#include <string>

class Solution {
public:
    std::string addBinary(std::string a, std::string b) {
        std::string result = "";
        int count = 0;
        for (int i = static_cast<int>( a.size() - 1); i >= 0; --i) {
            for (int j = static_cast<int>(b.size() - 1); j >= 0; --j) {
                if (a[i] == 1 && b[j] == 1) {
                    if (count != 0) {
                        result.insert(0, "1");
                        --count;
                    }
                    else {
                        result.insert(0, "0");
                    }
                    ++count;

                }
                else {
                    if (count != 0) {
                        result.insert(0, "0");
                        --count;
                    }
                    else {
                        result.insert(0, "1");
                    }
                }
            }
        }
        return result;
    }
};