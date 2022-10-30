//
// Created by grafsky on 9/13/22.
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