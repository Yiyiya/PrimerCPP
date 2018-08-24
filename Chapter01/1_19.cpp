#include <iostream>

using namespace std;

int main()
{
    cout << "Enter two  number: " << endl;
    int v1=0, v2=0;
    cin >> v1 >> v2;
    if ( v1 > v2 ){
        int tem = v1;
        v1=v2;
        v2=tem;
    }
    while (v1 <= v2){
        cout << v1 << endl;
        v1++;
    }

    return 0;
}
