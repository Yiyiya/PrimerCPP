#include <iostream>
#include <string>
using std::string;
using namespace std;
int main()
{
    string str;
    string large;

    while ( cin >> str )
        large += str;
        cout << "The concatenated string is " << large <<endl;

    return 0;
}
