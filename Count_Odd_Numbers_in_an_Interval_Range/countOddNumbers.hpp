//
// Created by grafsky on 11/6/22.
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