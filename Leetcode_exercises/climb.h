//STATUS: COMPLETED

#pragma once
#pragma once

#include <iostream>
class Solution {
public:
    int climbStairs(int n) {
        if (n <= 1) {
            return 1;
        }

        int two_before = 1;
        int one_before = 1;
        int total = 0;
        for (int i = 2; i < n + 1; ++i ) {
            total = two_before + one_before;
            two_before = one_before;
            one_before = total;
        }
        return total;
    }
};
// n = 3; 