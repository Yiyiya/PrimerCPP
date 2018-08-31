// read a sequence of strings from cin and
// store those values in a vector.
#include <iostream>
using namespace std;

#include <vector>
using std::vector;

#include <string>
using std::string;

int main()
{
    string word;
    vector<string> text;
    while (cin >> word){
        text.push_back(word);
    }
    
    return 0;
}
