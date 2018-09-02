#include <iostream>
using namespace std;

#include <string>
using std::string;

#include <vector>
using std::vector;

int main()
{
    int vec[10] = {};
    for (int i = 0; i != 10; ++i){
        vec[i] = i;
    }
    for (auto ar : vec)
        cout << ar << " ";
    cout << endl;
    
    return 0;
}
