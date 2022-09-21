//
// Created by grafsky on 9/18/22.
//
#include <iostream>
#include "time.h"
using namespace std;

//решение с рекурсией
int persistence_with_recursion(long long n){
    int continue_value, returned_value;
    continue_value = 1;
    n > 9 ? returned_value = 1 : returned_value = 0;
    while (n){
        continue_value *= n % 10;
        n /= 10;
    }
    (continue_value > 9) ? returned_value += persistence_with_recursion(continue_value) : returned_value = returned_value;
    return returned_value;
}
//решение с циклами
int persistence_with_cycle(long long n){
	int ret = 0;
	int cont;
	do{
        cont = 1;
        if (n > 9)
			ret++;
	    while (n > 0){
		    cont *= n % 10;
			n /= 10;
		}
        n = cont;
	}while (cont > 9);
	return ret;
}

int main(){
    clock_t time;
    time = clock();
    cout << "39 with cycle:\t\t" << persistence_with_cycle(39) << ", execution time: " << (clock() - time/CLOCKS_PER_SEC) << endl;
    time = clock();
    cout << "39 with recursion:\t" << persistence_with_recursion(39) << ", execution time: " << (clock() - time/CLOCKS_PER_SEC) << endl;
    time = clock();
    cout << "4 with cycle:\t\t" << persistence_with_cycle(4) << ", execution time: " << (clock() - time/CLOCKS_PER_SEC) << endl;
    time = clock();
    cout << "4 with recursion:\t" << persistence_with_recursion(4) << ", execution time: " << (clock() - time/CLOCKS_PER_SEC) << endl;
    time = clock();
    cout << "25 with cycle:\t\t" << persistence_with_cycle(25) << ", execution time: " << (clock() - time/CLOCKS_PER_SEC) << endl;
    time = clock();
    cout << "25 with recursion:\t" << persistence_with_recursion(25) << ", execution time: " << (clock() - time/CLOCKS_PER_SEC) << endl;
    time = clock();
    cout << "999 with cycle:\t\t" << persistence_with_cycle(999) << ", execution time: " << (clock() - time/CLOCKS_PER_SEC) << endl;
    time = clock();
    cout << "999 with recursion:\t" << persistence_with_recursion(999) << ", execution time: " << (clock() - time/CLOCKS_PER_SEC) << endl;
    time = clock();
    cout << "444 with cycle:\t\t" << persistence_with_cycle(444) << ", execution time: " << (clock() - time/CLOCKS_PER_SEC) << endl;
    time = clock();
    cout << "444 with recursion:\t" << persistence_with_recursion(444) << ", execution time: " << (clock() - time/CLOCKS_PER_SEC) << endl;
}
