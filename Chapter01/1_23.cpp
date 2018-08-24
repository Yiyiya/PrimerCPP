#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
//1_23
    Sales_item currItem, item;
    if (cin >> currItem )
    {
        int cnt = 1 ;
        while (cin >> item)
        {
            if (currItem.isbn()== item.isbn())
            {
                ++cnt;
            }
            else{
                cout << currItem << "occurs" << cnt << " times " << endl;
                currItem = item;
                cnt = 1;
            }
        }
        cout << currItem << "occurs" << cnt << " times " << endl;
    }

    return 0;
}
