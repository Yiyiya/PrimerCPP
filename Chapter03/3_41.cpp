#include <iostream>
using namespace std;

#include <string>
using std::string;

#include<vector>

int main()
{
    int int_arr[] = {0,1,2,3,4,5,6,7,8,9};
    vector<int> ivec(begin(int_arr), end(int_arr));

    for (auto i : ivec)
        cout << i << " ";
    cout << endl;

    return 0;
}
