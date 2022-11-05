//
// Created by grafsky on 9/13/22.
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

int main(){
    vector<int> tmp{0,1,0,3,12};
    moveZeroes(tmp);
    for (int i:tmp) {
        cout << i << "|";
    }
    return 0;
}