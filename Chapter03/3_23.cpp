#include <iostream>
using namespace std;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <iterator>
int main()
{
    vector<int> vec;
    for (int i = 0; i!= 10; ++i){
        vec.push_back(i);
    }
    for (auto it = vec.begin(); it != vec.end(); ++it)
        *it *= 2;
    for (auto value :vec)
        cout << value << " ";
    cout << endl;

    return 0;
}

