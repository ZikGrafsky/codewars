#include <iostream>//std in/out
#include <memory>//for smart pointers
#include <string>
#include <sstream>

using namespace std;

int getScore(const std::string &str){
    int result = 0;

    for (auto it:str){
        if (isalpha(it))
            result = result + toupper(it) - 'A' + 1;
    }
    return result;
}

std::string highestScoringWord(const std::string &str)
{
    string result("");
    istringstream iss(str);
    string token;
    while (std::getline(iss, token, ' '))
        if (getScore(token) > getScore(result))
            result = token;
    return result;
}


int	main(int argc, char **argv){
    cout << highestScoringWord("man i need a taxi up to ubud");
	return 0;
}