//
// Created by grafsky on 11/6/22.
//
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string some_prefix{*strs.begin()};
        for (vector<string>::iterator it = strs.begin(); it != strs.end(); ++it) {
            if (it->empty() || some_prefix.empty())
                some_prefix.erase(0, some_prefix.length());
            for (int i = 0; i < it->length() && i < some_prefix.length(); i++) {
                if (it->length() == i + 1 && some_prefix.length() != i + 1)
                    swap(some_prefix, *it);
                if(some_prefix.at(i) != it->at(i))
                    some_prefix.erase(i, some_prefix.length() - i);
            }
        }
        return (some_prefix);
    }
};