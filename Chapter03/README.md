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
## Exercise 3.1 
[1.9](https://github.com/Yiyiya/PrimerCPP/blob/master/Chapter03/1_9.cpp), 
[1.10](https://github.com/Yiyiya/PrimerCPP/blob/master/Chapter03/1_10.cpp),
[1.11](https://github.com/Yiyiya/PrimerCPP/blob/master/Chapter03/1_11.cpp),
[1.6](https://github.com/Yiyiya/PrimerCPP/blob/master/Chapter03/1_6.cpp).
