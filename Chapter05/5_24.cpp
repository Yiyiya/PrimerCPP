#include <iostream>
using namespace std;
#include <stdexcept>
using std::runtime_error;

int main()
{
    int a, b;
    cin >> a >> b;

    if (b == 0)
        throw runtime_error("divisor is 0");

    cout << static_cast<double>(a) / b << endl;

    return 0;
}
