#include <iostream>
using namespace std;

#include <vector>
using std::vector;

#include <string>
using std::string;

int main()
{
//3_17
    string word;
    vector<string> text;
    while (cin >> word){
        text.push_back(word);
    }
    for (auto& str : text)
        for (auto& c : str) c = toupper(c);

    for(decltype(text.size()) i = 0; i != text.size() ; ++i){
        cout << text[i] << " ";
    }
    cout << endl;

    return 0;
}

//output
//chu xu love jing forever
//CHU XU LOVE JING FOREVER

