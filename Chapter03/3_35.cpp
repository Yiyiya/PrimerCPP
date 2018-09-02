#include <iostream>
using namespace std;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include<iterator>
#include<cstddef>
int main()
{
    int arr[10] = {};
    int *b = begin(arr);
    int *e = end(arr);
    for (int *i = b; i != e; ++i)
        *i = 0;

    for (auto i : arr)
        cout << i << " ";
    cout << endl;

    return 0;
}
