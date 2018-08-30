#include <iostream>
#include <string>
using std::string;
using namespace std;
int main()
{
    while ( cin >> str1 >> str2 ){
        if (str1.size() == str2.size())
            cout << "The two string are equal! " << endl;
        else
            cout << "The large one is:" <<((str1.size() > str2.size())? str1:str2);
    }

    return 0;
}
