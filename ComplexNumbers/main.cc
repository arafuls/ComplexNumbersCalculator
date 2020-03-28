#include "Complex.h"
#include <iostream>
using namespace std;

int main() 
{
	Complex a(1, 2);
	Complex b(2, 3);

	int i = 5;

	// op: Complex x Complex --> Complex
	cout << a << " + " << b << " = " << a + b << endl;
	cout << a << " - " << b << " = " << a - b << endl;
	cout << a << " * " << b << " = " << a * b << endl;
	cout << a << " / " << b << " = " << a / b << endl;
	cout << endl;

	// op: Complex x double --> Complex
	cout << a << " + " << i << " = " << a + i << endl;
	cout << a << " - " << i << " = " << a - i << endl;
	cout << a << " * " << i << " = " << a * i << endl;
	cout << a << " / " << i << " = " << a / i << endl;
	cout << endl;

	// op: double x Complex --> Complex
	cout << i << " + " << a << " = " << i + a << endl;
	cout << i << " - " << a << " = " << i - a << endl;
	cout << i << " * " << a << " = " << i * a << endl;
	cout << i << " / " << a << " = " << i / a << endl;
	cout << endl;

	//system("pause");
	return 0;
}