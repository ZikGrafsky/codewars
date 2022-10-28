//
// Created by grafsky on 10/28/22.
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

int main(){
    vector<int> nums{13,4,6,23,8};
    for(auto i: (new Solution())->runningSum(nums))
    cout << i << "|";
}