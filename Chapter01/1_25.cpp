#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
//1_25
    Sales_item total;
    if (cin >> total){
        Sales_item trans;
        while (cin >> trans){
            if (total.isbn() == trans.isbn() )
                total += trans;
            else{
                cout << total << endl;
                total = trans;
            }
        }
        cout << total << endl;
    } else{
        cerr << "No data?1" << endl;
        return -1;
    }

    return 0;
}
