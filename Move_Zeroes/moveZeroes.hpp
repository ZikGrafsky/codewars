//
// Created by grafsky on 11/6/22.
//
#include <iostream>
#include <vector>
#include<bits/stdc++.h>

using namespace std;

void moveZeroes(vector<int>& nums) {
    vector<int>::iterator it = std::find(nums.begin(), nums.end(), 0);
    short i = 0;
    while (it != nums.end() - i) {
        nums.erase(it);
        nums.push_back(0);
        it = std::find(it, nums.end() - i++, 0);
    }
}