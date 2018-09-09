#include <iostream>
using namespace std;

#include <string>
using std::string;

int main()
{
    string curr, prev;
    bool no_twice = false;

    while (cin >> curr) {
        if (!isupper(curr[0]))
            continue;
        if (prev == curr){
            cout << curr << " occurs twice in succession. " << endl;
            no_twice = true;
            break;
        }
        else
            prev = curr;
    }
    if (! no_twice)
        cout << "no word was repeated." << endl;

    return 0;
}
