//STATUS: COMPLETED
#pragma once
#include <string>

class Solution {
public:
    int myAtoi(std::string s) {
        long long int result = 0;
        std::string num = "";
        bool minus = false;
        s.erase(0, s.find_first_not_of(" "));
        
        for (size_t i = 0; i < s.size(); ++i) {
            std::cout << "Num now: " << num << std::endl;
            if (s[i] == '+') {
                if (!std::isdigit(s[i + 1])) {
                    break;
                }
                continue;
            }
            else if (s[i] == '-') {
                minus = true;
            }
            else if (std::isdigit(s[i])) {
                if (s[i] == '0' && s[i+1] == '0' && num.empty()) {
                    continue;
                }   
                num += s[i];
            }
            else {
                break;
            }
            if (!std::isdigit(s[i + 1])) {
                break;
            }
        }

        if (num.size() > 10) {
            if (minus) {
                return INT_MIN;
            }
            return INT_MAX;
        }

        for (int i = static_cast<int>(num.size() - 1); i >= 0; --i) {
            result += (num[i] - 48) * pow(10, (num.size() - i - 1));
        }
        if (minus) {
            result = result * (-1);
        }
        if (result > INT_MAX) {
            return INT_MAX;
        }
        else if (result < INT_MIN) {
            return INT_MIN;
        }
        return static_cast<int>(result);
    }

};