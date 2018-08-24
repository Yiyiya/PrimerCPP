#include <iostream>

using namespace std;

int main()
{
//1_13
    int sum =0;
    for (int val=50; val <=100; ++val)
        sum +=val;
    cout << "Sum of 50 to 100 inclusive is "
         << sum << endl;

    for (int v=10; v>=0; --v)
        cout << v << endl;

    cout << "Enter two  number: " << endl;
    int v1=0, v2=0;
    cin >> v1 >> v2;
    if (v1 >v2)
    {
        int tem = v1;
        v1=v2;
        v2=tem;
    }
    for (int i=v1; i<=v2; i++)
{
        cout << v1 << endl;
        v1++;
}
    return 0;
}