//
// Created by grafsky on 9/11/22.
//
#include <iostream>
#include <vector>

std::string likes(const std::vector<std::string> &names)
{
    if (!names.empty())
        switch (names.size()) {
            case 1: return (names[0] + " likes this");
            case 2: return (names[0] + " and " + names[1] + " like this");
            case 3: return (names[0] + ", " + names[1] + " and " + names[2] + " like this");
            default: return (names[0] + ", " + names[1] + " and " + std::to_string(names.size() - 2) + " others like this");
        }
    return ("no one likes this"); // Do your magic!
}

int main(){
    std::cout << likes({}) << std::endl;
    std::cout << likes({"Peter"}) << std::endl;
    std::cout << likes({"Jacob", "Alex"}) << std::endl;
    std::cout << likes({"Max", "John", "Mark"}) << std::endl;
    std::cout << likes({"Alex", "Jacob", "Mark", "Max", "kek", "lok"}) << std::endl;
}