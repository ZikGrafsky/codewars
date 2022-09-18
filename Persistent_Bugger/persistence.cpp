//
// Created by grafsky on 9/18/22.
//
#include <iostream>
using namespace std;

//решение с рекурсией
int persistence(long long n){
    int continue_value, returned_value;
    continue_value = 1;
    n > 9 ? returned_value = 1 : returned_value = 0;
    while (n){
        continue_value *= n % 10;
        n /= 10;
    }
    (continue_value > 9) ? returned_value += persistence(continue_value) : returned_value = returned_value;
    return returned_value;
}
//решение с циклами
//int persistence(long long n){
//
//}

int main(){
    cout << persistence(39) << "\n";
    cout << persistence(4) << "\n";
    cout << persistence(25) << "\n";
    cout << persistence(999) << "\n";
    cout << persistence(444) << "\n";
}