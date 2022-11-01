//
// Created by grafsky on 11/1/22.
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

int main(){
    cout << "res: " << hammingWeight(00000000000000000000000010000000) << endl;

    return 0;
}
