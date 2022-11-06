//
// Created by grafsky on 10/28/22.
//
#include "runningSumOf1DArray.hpp"

int main(){
    vector<int> nums{13,4,6,23,8};
    for(auto i: (new Solution())->runningSum(nums))
    cout << i << "|";
}