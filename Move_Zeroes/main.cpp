//
// Created by grafsky on 9/13/22.
//
#include "moveZeroes.hpp"

int main(){
    vector<int> tmp{0,1,0,3,12};
    moveZeroes(tmp);
    for (int i:tmp) {
        cout << i << "|";
    }
    return 0;
}