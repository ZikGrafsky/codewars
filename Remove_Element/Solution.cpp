//
// Created by grafsky on 9/13/22.
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


int main(){
    cout << removeElement(*new vector<int>{0,1,2,2,3,0,4,2}, 2);
    return 0;
}