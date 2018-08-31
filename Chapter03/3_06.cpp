#include <iostream>
using namespace std;

#include <string>
using std::string;

int main()
{
    string str("a simple string");
    for (auto& c : str) c = 'X';
    cout << str << endl;

    return 0;
}
