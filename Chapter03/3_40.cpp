#include <iostream>
using namespace std;

#include <string>
using std::string;

#include<cstring>
#include<cstddef>
using std::size_t;

int main()
{
    const char cstr1[] = "Hello";
    const char cstr2[] = "world!";

    size_t new_size = strlen(cstr1) + strlen(" ") + strlen(cstr2) + 1;
    char* cstr3 = new char[new_size];

    strcpy(cstr3, cstr1);
    strcat(cstr3," ");
    strcat(cstr3, cstr2);

    cout << cstr3 << endl;

    return 0;
}
