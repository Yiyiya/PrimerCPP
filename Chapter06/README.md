# Chapter 6. Functions
## Exercise 6.3
```
#include <iostream>
using namespace std;

int fact (int val)
{
    if (val == 0 || val == 1)
        return 1;
    else
        return val * fact(val-1);
}
int main()
{
    int j = fact(5); // j equals 120
    cout << "5! is " << j << endl;
    return 0;
}
```
## Exercise 6.4
```
#include <iostream>
using namespace std;

int fact (int val)
{
    int ret = 1;
    while (val > 1)
        ret *= val--;
    return ret;
}
int main()
{
    cout << "Enter a number within [0, 13): " << endl;
    int val = 0;
    cin >> val;
    cout << val << "! is " << fact(val) << endl;

    return 0;
}
```
## Exercise 6.5
```
#include <iostream>
using namespace std;

double fabs(double val)
{
    return val >= 0? val : -val;
}
int main()
{
    cout << "Enter a number: " << endl;
    double val = 0;
    cin >> val;
    cout << "The abs of " << val << " is " << fabs(val) << endl;

    return 0;
}
```
```
template <typename T>
T abs(T i)
{
    return i >= 0 ? i : -i;
}
```
## Exercise 6.6
```
// example
size_t count_add(int n)       // n is a parameter.
{
    static size_t ctr = 0;    // ctr is a static variable.
    ctr += n;
    return ctr;
}

int main()
{
    for (size_t i = 0; i != 10; ++i)  // i is a local variable.
      cout << count_add(i) << endl;

    return 0;
}
```
## Exercise 6.7
```
size_t generate()
{
    static size_t ctr = 0;
    return ctr++;
}
```
## Exercise 
