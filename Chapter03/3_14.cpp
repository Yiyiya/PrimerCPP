// read a sequence of ints from cin and
// store those values in a vector.

#include <iostream>
using namespace std;

#include <vector>
using std::vector;

int main()
{
    vector<int> vec;
    int i;
    while (cin >> i){
        vec.push_back(i);
    }

    return 0;
}
