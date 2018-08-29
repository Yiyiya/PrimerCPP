# Chapter 3. Strings, Vectors, and Arrays
## using declarations for names from the standard library
```
#include <iostream>
using std::cin;

int main()
{
    int i;
    cin >> i;
    std::cout << i;
    std::cout << i ;
    return 0;
}
```
```
#include <iostream>
using std::cin;
using std::cout; using std::endl;
int main()
{
    cout << "Enter two numbers: " << endl;
    int v1, v2;
    cin >> v1 >> v2;
    cout << "The sum of " << v1 << " and " << v2
         <<" is " << v1+v2 << endl;
    return 0;
}
```
