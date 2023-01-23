#include <iostream>//std in/out
#include <memory>//for smart pointers
#include <string>

using namespace std;

void add(string &to, int it){
    if (!to.empty())
        to += " ";
    to += std::to_string(it);
}

std::string alphabet_position(const std::string &text) {
    string result;

    for (auto it:text){
        if (isalpha(it))
            add(result, toupper(it) - 'A' + 1);
    }
    return result;
}

int	main(int argc, char **argv){
    cout << alphabet_position("The sunset sets at twelve o' clock.") << endl << "20 8 5 19 21 14 19 5 20 19 5 20 19 1 20 20 23 5 12 22 5 15 3 12 15 3 11";
    return 0;
}