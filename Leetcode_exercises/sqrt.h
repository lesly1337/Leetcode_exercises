#pragma once

#include <iostream>
class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) {
            return x;
        }
        int left = 0;
        int right = x;
        int mid;
        while (left <= right) {
            mid = left + (right - left) / 2;
            long long square = static_cast<long long>(mid) * mid;
            if (square < x) {
                left = mid + 1;
            }
            else if (square == x) {
                return mid;
            }
            else {
                right = mid - 1;
            }
        }
        return static_cast<int>(std::round(right));
    }
};