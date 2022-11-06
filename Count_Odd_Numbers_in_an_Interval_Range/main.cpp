//
// Created by grafsky on 10/31/22.
//
#include "countOddNumbers.hpp"

int main(){
    clock_t time;
    time = clock();
    cout << "if_cond result: " << countOdds_if_cond(7,9) << " time: "<< (clock() - time/CLOCKS_PER_SEC)<< "\n";
    time = clock();
    cout << "ternary result: " << countOdds_ternary(7,9) << " time: "<< (clock() - time/CLOCKS_PER_SEC)<< "\n";
    return 0;
}
