//
// Created by grafsky on 11/01/22.
//
#include <iostream>

using namespace std;

int product(int n){
    int ret = 1;
    while (n != 0){
        ret *= n % 10;
        n /= 10;
    }
    return ret;
}

int sum(int n){
    int ret = 0;
    while (n != 0){
        ret += n % 10;
        n /= 10;
    }
    return ret;
}

int subtractProductAndSum(int n) {
    return product(n) - sum(n);
}