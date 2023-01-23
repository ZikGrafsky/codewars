#include <iostream>//std in/out
    #include <memory>//for smart pointers
    #include <string>

using namespace std;

bool isnumber(char c){
    return (c >= '0' && c <= '9');
}

std::string incrementString(const std::string &str)
{
    string result(str);
    int count = 0;
    while (*(result.end() - 1) == '9') {
        result.pop_back();
        count++;
    }
    if (isnumber(*(result.end() - 1))){
        char i = *(result.end() - 1) - '0' + 1;
        result.pop_back();
        result.push_back(i + '0');
    }else
        result.push_back('1');
    while (count-- > 0)
        result.push_back('0');
    return result;
}

int	main(int argc, char **argv){
    cout << incrementString("foobar99");
	return 0;
}