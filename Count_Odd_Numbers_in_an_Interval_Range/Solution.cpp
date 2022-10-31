//
// Created by grafsky on 10/31/22.
//
#include <iostream>
#include "time.h"

using namespace std;

int countOdds_if_cond(int low, int high) {
    if (low % 2 != 0 && high % 2 != 0)
        return (high - low + 1) / 2 + 1;
    return (high - low + 1) / 2 ;
}

int countOdds_ternary(int low, int high) {
    return (low % 2 != 0 && high % 2 != 0) ? ((high - low + 1) / 2 + 1) : ((high - low + 1) / 2);
}

int main(){
    clock_t time;
    time = clock();
    cout << "if_cond result: " << countOdds_if_cond(7,9) << " time: "<< (clock() - time/CLOCKS_PER_SEC)<< "\n";
    time = clock();
    cout << "ternary result: " << countOdds_ternary(7,9) << " time: "<< (clock() - time/CLOCKS_PER_SEC)<< "\n";
    return 0;
}
