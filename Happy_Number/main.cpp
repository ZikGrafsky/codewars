//
// Created by grafsky on 9/13/22.
//
#include "happyNumber.hpp"

int main(){
    int number;
    cout << "Enter the number(1 < number < 2147483647):__________\b\b\b\b\b\b\b\b\b\b";
    cin >> number;
    cout << "This number is ";
    if (!(new Solution())->isHappy(number))
        cout << "not ";
    cout << "happy!";
    return 0;
}