#include <iostream>
#include "ch6.h"

void swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void exercise12()
{
	int a = 10, b = 100;
	std::cout << a << " " << b << std::endl;
	swap(a, b);
	std::cout << a << " " << b << std::endl;
}
