//
// Created by grafsky on 9/12/22.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            int diff_pos = std::find(nums.begin(), nums.end(), target - nums[i]) - nums.begin();
            if (diff_pos != -1 && diff_pos != i)
                return ((new vector<int>(0, i))->push_back(diff_pos));
        }
    }
};

int main(){
    Solution tmp;
    vector<int> example;
    example.push_back(2);
    example.push_back(4);
    example.push_back(7);
    example.push_back(8);
    example.push_back(3);
    example.push_back(1);
    vector<int> test = tmp.twoSum(example, 10);
    for (auto i:test) {
        cout << test[i];
    }
}