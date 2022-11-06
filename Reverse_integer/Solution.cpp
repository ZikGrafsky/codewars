//
// Created by grafsky on 11/6/22.
//
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int reverse(int x) {
    long i = 0;
    while(x){
        i = (i * 10) + (x % 10);
        x /= 10;
    }
    return (i > INT_MAX || i < INT_MIN) ? 0 : i;
}


int main(){
    cout << "res: " << reverse(-2143847412) << endl;
    cout << "res: " << reverse(0) << endl;
    cout << "res: " << reverse(1) << endl;
    cout << "res: " << reverse(INT_MIN) << endl;
    return 0;
}