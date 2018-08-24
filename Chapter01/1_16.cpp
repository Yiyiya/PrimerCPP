#include <iostream>

using namespace std;

int main()
{
//    int sum =0 , value=0;
//    while ( std::cin >> value )
//        sum += value;
//    cout << " Sum is: " << sum << endl;

    int sum=0;
    for (int value ; cin >> value; )
        sum += value ;
    cout << "Sum is: " << sum << endl;
    
    return 0;
}
