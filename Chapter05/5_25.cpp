#include <iostream>
using namespace std;
#include <stdexcept>
using std::runtime_error;

int main()
{
    int a, b;
    cout << "Inter two integers: ";
    while (cin >> a >> b){
        try{
            if (b == 0)
            throw runtime_error("divisor is 0");
            cout << static_cast<double>(a) / b << endl;
            cout << "Input two integers: ";
        }
        catch (runtime_error err){
            cout << err.what();
            cout << "\nTry Again? Enter y or n: " << endl;
            char c;
            cin >> c;
            if (!cin || c == 'n')
                break;
        }
    }
    return 0;
}
