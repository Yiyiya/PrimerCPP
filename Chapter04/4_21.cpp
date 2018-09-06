#include <iostream>
using namespace std;

#include <vector>
using std::vector;

int main()
{
    vector<int> ivec{1,2,3,4,5,6,7,8,9};
    for (auto&i : ivec)
        i = (i % 2) ? (i * 2) : i;
    for (auto i : ivec)
        cout << i << " ";
    cout << endl;
    return 0;
}
