#include <iostream>
#include <string>
using std::string;
using namespace std;
int main()
{
    string str1, str2;

    while ( cin >> str1 >> str2 ){
    if (str1 == str2)
        cout << "The two string are equal! " << endl;
    else
        cout << "The large one is:" <<((str1 > str2)? str1:str2);
    }

    return 0;
}
