#include <iostream>
#include "ch6.h"

using std::cout;
using std::endl;

void f();
void f(int);
void f(int, int);
void f(double, double = 3.14);

void f()
{
	cout << "f without parameters" << endl;
}

void f(int i)
{
	cout << "f with one int parameter" << endl;
}

void f(int i, int j)
{
	cout << "f with two int parameters" << endl;
}

void f(double i, double j)
{
	cout << "f with two double parameters" << endl;	
}

void exercise51()
{
	//f(2.56, 42);
	f(42);
	f(42, 0);
	f(2.56, 3.14);
}
