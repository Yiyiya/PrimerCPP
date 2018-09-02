#include <iostream>
using namespace std;

#include <string>
using std::string;

#include<vector>

int main()
{
    vector<int> ivec{0,1,2,3,4,5,6,7,8,9};
    int int_arr[10];

    for (int* i = begin(int_arr); i != end(int_arr); ++i)
        *i = ivec[i - begin(int_arr)];

    for(auto i : int_arr)
        cout << i << " ";
    cout << endl;


    return 0;
}
