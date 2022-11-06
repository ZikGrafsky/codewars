//
// Created by grafsky on 11/6/22.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            int diff_pos = std::find(nums.begin() + 1, nums.end(), target - nums[i]) - nums.begin();
            if (diff_pos != -1 && diff_pos != i && diff_pos != nums.size())
                return (vector < int > {i, diff_pos});
        }
        return (vector<int>{0, 0});
    }
};