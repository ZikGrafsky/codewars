//
// Created by grafsky on 11/6/22.
//
#include <iostream>
#include <vector>
#include "time.h"
#include "../Reverse_integer/reverseIntegeer.hpp"

using namespace std;

int countDistinctIntegers(vector<int>& nums) {
    unordered_set<int> s(begin(nums), end(nums));
    for (auto& num : nums) {
        s.insert(reverse(num));
    }
    return s.size();
}