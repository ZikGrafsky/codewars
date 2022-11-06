//
// Created by grafsky on 11/6/22.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include "time.h"

using namespace std;

double average_with_algorithm(vector<int>& salary) {
    double result = 0.0;
    for (auto it = salary.begin(); it != salary.end(); ++it) {
        if (it != max_element(salary.begin(), salary.end()) && it != min_element(salary.begin(), salary.end()))
            result += (double) *it;
    }
    return result / (salary.size() - 2);
}

double average(vector<int>& salary) {
    double result = 0.0;
    int max = 0;
    int min = *salary.begin();
    for (auto it = salary.begin(); it != salary.end(); ++it) {
        if (*it > max)
            max = *it;
        if (*it < min)
            min = *it;
        result += (double) *it;
    }
    return ((result - (max + min)) / (salary.size() - 2));
}