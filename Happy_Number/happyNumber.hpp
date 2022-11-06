//
// Created by grafsky on 11/6/22.
//
#include <iostream>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        int i = 0;
        int tmp = 0;
        while (i++ != 20){
            tmp += ((n % 10) * (n % 10));
            if (n < 10){
                n = tmp;
                tmp = ((n % 10) * (n % 10));
            }
            n /= 10;
        }
        return tmp == 1;
    }
};