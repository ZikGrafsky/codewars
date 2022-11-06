//
// Created by grafsky on 10/31/22.
//
#include "averageSalary.hpp"

int main(){
    clock_t time;
    vector<int> tmp {4000,3000,1000,2000};
    time = clock();
    cout << "Without algo: " << average(tmp) << " time: " << (clock() - time/CLOCKS_PER_SEC) << endl;
    time = clock();
    cout << "With algo: " << average_with_algorithm(tmp) << " time: " << (clock() - time/CLOCKS_PER_SEC) << endl;
    return 0;
}