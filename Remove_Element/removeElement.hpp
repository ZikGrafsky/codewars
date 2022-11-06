//
// Created by grafsky on 11/6/22.
//
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    while (find(nums.begin(), nums.end(), val) != nums.end())
        nums.erase(find(nums.begin(), nums.end(), val));
    return nums.size();
}
