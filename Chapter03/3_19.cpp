#include <iostream>
using namespace std;

#include <vector>
using std::vector;

#include <string>
using std::string;

int main()
{
//3_19
    vector<int> vec1(10,42);
    vector<int> vec2{42,42,42,42,42,42,42,42,42,42};
    vector<int> vec3;
    for (int i = 0; i != 10; ++i)
       vec3.push_back(42);
   std::cout << "The first approach is better!" << std::endl;

    return 0;
}



