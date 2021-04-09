//Demo use of template function
//Author: nmessa

#include <iostream>
#include <string>
using namespace std;

//Template function prototype
template <class T>
T operate(T, T, char);

int main()
{
	int a = 32, b = 7;
	double c = 57.3, d = 12.8;
	char e = 'A', f = 'B';
	
	char ch = '-';
	cout << a << ch << b << " = " << operate(a, b, ch) << endl;
	cout << c << ch << d << " = " << operate(c, d, ch) << endl;
	cout << e << ch << f << " = " << operate(e, f, ch) << endl;
	
	return 0;
}

template <class T>
T operate(T x, T y, char c)
{
	switch (c)
	{
		case '+': 
			return x + y;
		case '-': 
			return x - y;
		case '*': 
			return x * y;
		case '/': 
			return x / y;
	}
}
