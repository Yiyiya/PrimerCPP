#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
//1_22
    Sales_item sum;
    if (cin >> sum )
    {
        Sales_item item;
        while (cin >> item)
        {
            if (sum.isbn()== item.isbn())
            {
                sum += item;
            }
            else{
                cout << sum << endl;
                sum = item;
            }
        }
        cout << sum << endl;
    }
    else{
        cerr << "Data must refer ro same ISBN." << endl;
        return -1;
    }


    return 0;
}
