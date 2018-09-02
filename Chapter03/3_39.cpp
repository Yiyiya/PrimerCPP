#include <iostream>
using namespace std;

#include <string>
using std::string;

#include<cstring>
#include<cstddef>
using std::size_t;

int main()
{
    //using string
    string s1("Mooophy");
    string s2("Pezy");

    if (s1 == s2)
        cout << "same string." << endl;
    else if (s1 > s2)
        cout << "Mooophy > Pezy" << endl;
    else
        cout << "Mooophy < Pezy"  << endl;

    cout << "===================" << endl;

    //using C-style character string.
    const char* cs1 = "Fujing";
    const char* cs2 = "Chuxu";

    auto result = strcmp(cs1, cs2);
    if (result == 0)
        cout << "same string." << endl;
    else if (result < 0)
        cout << "Fujing < Chuxu" << endl;
    else
        cout << "Fujing > Chuxu" << endl;

    return 0;
}
