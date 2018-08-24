#include <iostream>

using namespace std;

int main()
{
//1_11
    cout << "Enter two  number: " << endl;
    int v1=0, v2=0;
    cin >> v1 >> v2;
    while (v1 < v2)
    {
        cout << v1 << endl;
        ++v1;
    }
    while (v1 >= v2)
    {
        cout << v2 << endl;
        ++v2;
    }

    return 0;
}
