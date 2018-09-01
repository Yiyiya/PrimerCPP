#include <iostream>
using namespace std;

#include <string>
using std::string;

#include <vector>
using std::vector;

int main()
{
//    string s("some string");
//    if (s.begin() != s.end()){
//        auto it = s.begin();
//        *it = toupper(*it);
//    }
//    cout << s << endl;
//
//    for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
//        *it = toupper(*it);
//    cout << s << endl;

//    vector<int>::iterator it;
//    string::iterator it2;
//
//    vector<int>::const_iterator it3;
//    string::const_iterator it4;

//    vector<int> v;
//    const vector<int> cv;
//    auto it1 = v.begin();
//    auto it2 = cv.begin();
//    auto it3 = v.cbegin();
//    auto it4 = v.cend();

    vector<string> text;   //hold the input

    string s;
    while (getline(cin,s))  //read the entire input file
        text.push_back(s);  // storing each line as  an element in text
    cout << "text.size: " << text.size() << endl;

    //print each line in text up to the first blank line
    for (auto it = text.cbegin();
        it != text.cend() && !(*it).empty(); ++it)
        cout << *it << endl;

    //equivalent loop using arrow to deference it and call empty
    for (auto it = text.cbegin();
        it != text.cend() && it->empty(); ++it)
        cout << *it << endl;


    return 0;
}
