#include <iostream>

using namespace std;

int main()
{
//    cout << "Enter two number:" << endl;
//    int v1=0, v2=0;
//    cin >> v1 >> v2;
//    cout << "The sum of " << v1 << " and " << v2
//         << " is "<< v1+v2<<endl;

//    cout << " Hello World !" << endl;

//    cout << "Enter two number:" << endl;
//    int v1=0, v2=0;
//    cin >> v1 >> v2;
//    cout << "The product of " << v1 << " and " << v2
//         << " is "<< v1 * v2<<endl;


//    int sum=0, val=1;
//    while (val <= 10)
//    {
//        sum += val;
//        ++val;
//    }
//    cout << "Sum of 1 to 10 inclusive is "
//         << sum << endl;

//1_9
//    int sum=0, val=50;
//    while (val<=100)
//    {
//        sum += val;
//        ++val;
//    }
//    cout << " Sum of 50 to 100 inclusive is "
//         << sum << endl;

//1_10
//   int val=10;
//   while (val >=0)
//   {
//       cout << val << endl  ;
//       --val;
//   }

//1_11
//    cout << "Enter two  number: " << endl;
//    int v1=0, v2=0;
//    cin >> v1 >> v2;
//    while (v1 < v2)
//    {
//        cout << v1 << endl;
//        ++v1;
//    }
//    while (v1 >= v2)
//    {
//        cout << v2 << endl;
//        ++v2;
//    }

//    int sum =0;
//    for (int val=1; val <=10; val++)
//        sum += val;
//    cout << "Sum of 1 to 10 inclusive is "
//         << sum << endl;

//1_12
//    int sum =0;
//    for (int i =-100; i<=100; ++i)
//        sum +=i;
//    cout << "Sum of -100 to 100 inclusive is "
//         << sum << endl;

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
