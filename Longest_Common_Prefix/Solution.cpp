//
// Created by grafsky on 9/13/22.
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

int main(){
    vector<string> strs {"flower","flow"};
    cout << "case [\"flower\",\"flow\"]: " << (new Solution())->longestCommonPrefix(strs) << endl;
    vector<string> strs1 {"flower","flow","light"};
    cout << "case [\"flower\",\"flow\",\"light\"]: " << (new Solution())->longestCommonPrefix(strs1) << endl;
    vector<string> strs2 {"flower"};
    cout << "case [\"flower\"]: " << (new Solution())->longestCommonPrefix(strs2) << endl;
    vector<string> strs3 {"acc","aaa","aaba"};
    cout << "case [\"acc\",\"aaa\",\"aaba\"]: " << (new Solution())->longestCommonPrefix(strs3) << endl;
    vector<string> strs4 {"ab", "a"};
    cout << "case [\"ab\", \"a\"]: " << (new Solution())->longestCommonPrefix(strs4) << endl;
    vector<string> strs5 {"b", "a"};
    cout << "case [\"b\", \"a\"]: " << (new Solution())->longestCommonPrefix(strs5) << endl;
    vector<string> strs6 {"abab","aba",""};
    cout << "case [\"abab\",\"aba\",\"\"]: " << (new Solution())->longestCommonPrefix(strs6) << endl;
    return 0;
}