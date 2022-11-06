//
// Created by grafsky on 11/6/22.
//
#include <iostream>
using namespace std;

int hammingWeight(uint32_t n) {
    char res = 0;
    for (char i = 0; i < sizeof(uint32_t) * 8; ++i) {
        if ((bool((1 << i)  &  n)))
            res++;
    }
    return (int)res;
}