#include <iostream>

using namespace std;

int main()
{
// 2_8
    cout << 2 << "\115\n" << endl;
    cout <<2 << "\t" << '\115'<< '\n'<< endl;

    std::cout << "\062\115\012";
    std::cout << "\062\t\115\012";

    return 0;
}
