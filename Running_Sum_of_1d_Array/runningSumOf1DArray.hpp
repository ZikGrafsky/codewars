//
// Created by grafsky on 11/6/22.
//
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (vector<int>::iterator it = nums.end() - 1; it != nums.begin(); --it)
            for (int i = 1; i <= it - nums.begin(); ++i)
                *it += *(it - i);
        return nums;
    }
};