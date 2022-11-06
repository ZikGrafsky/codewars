//
// Created by grafsky on 9/12/22.
//
#include "twoSum.hpp"

int main(){
    Solution tmp;
    vector<int> example;
    example.push_back(3);
    example.push_back(2);
    example.push_back(4);
    example.push_back(8);
    example.push_back(3);
    example.push_back(1);
    vector<int> test = tmp.twoSum(example, 6);
    cout << test[0] << "|" << test[1];
}