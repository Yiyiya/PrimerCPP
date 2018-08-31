#include <iostream>
using namespace std;

#include <string>
using std::string;

int main()
{
    string str("some string");

    decltype(str.size()) index = 0;
    //for loop
    for (index = 0; index < str.size(); ++index)
        str[index] = 'X';
    cout << str << endl;

    //while loop

    while (index < str.size()){
        str[index] = 'Y';
        ++index;
    }
    cout << str << endl;


    return 0;
}
