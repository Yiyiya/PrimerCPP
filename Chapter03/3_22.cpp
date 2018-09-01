#include <iostream>
using namespace std;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <iterator>
int main()
{
    vector<string> text;   //hold the input

    string s;
    while (getline(cin,s))  //read the entire input file
        text.push_back(s);  // storing each line as  an element in text
    cout << "text.size: " << text.size() << endl;

    //print each line in text up to the first blank line
    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) {
        for (auto& c : *it) c = toupper(c);
        cout << *it << endl;
    }

    //equivalent loop using arrow to deference it and call empty
    for (auto it = text.begin(); it != text.end() && (*it).empty(); ++it){
        for (auto& c : *it) c = toupper(c);
        cout << *it << endl;

    }

    return 0;
}

