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

```
#include <string> 
using std::string; using std::getline;

#include <iostream> 
using std::cin; using std::cout; using std::endl;

int main() 
{
	string line;

	// read input a line at a time until end-of-file
	while (getline(cin, line))
		cout << line << endl;

	return 0;
}
```


## Exercise 3.1 
[1.9](https://github.com/Yiyiya/PrimerCPP/blob/master/Chapter03/1_9.cpp), 
[1.10](https://github.com/Yiyiya/PrimerCPP/blob/master/Chapter03/1_10.cpp),
[1.11](https://github.com/Yiyiya/PrimerCPP/blob/master/Chapter03/1_11.cpp),
[1.6](https://github.com/Yiyiya/PrimerCPP/blob/master/Chapter03/1_6.cpp).
## Exercise 3.2
[3.2a](https://github.com/Yiyiya/PrimerCPP/blob/master/Chapter03/3_02a.cpp),
[3.2b](https://github.com/Yiyiya/PrimerCPP/blob/master/Chapter03/3_02b.cpp).
## Exercise 3.4
[3.4a](https://github.com/Yiyiya/PrimerCPP/blob/master/Chapter03/3_04a.cpp),
[3.4b](https://github.com/Yiyiya/PrimerCPP/blob/master/Chapter03/3_04b.cpp).
## Exercise 3.5
[3.5a](https://github.com/Yiyiya/PrimerCPP/blob/master/Chapter03/3_05a.cpp),
[3.5b](https://github.com/Yiyiya/PrimerCPP/blob/master/Chapter03/3_05b.cpp).
## [Exercise 3.6](https://github.com/Yiyiya/PrimerCPP/blob/master/Chapter03/3_06.cpp)
## [Exercise 3.8](https://github.com/Yiyiya/PrimerCPP/blob/master/Chapter03/3_08.cpp)
## [Exercise 3.10](https://github.com/Yiyiya/PrimerCPP/blob/master/Chapter03/3_10.cpp)
