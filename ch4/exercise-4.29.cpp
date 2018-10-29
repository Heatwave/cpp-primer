#include <iostream>

void exercise29()
{
	int x[10]; int *p = x;
	std::cout << sizeof(x) / sizeof(*x) << std::endl;
	std::cout << sizeof(p) / sizeof(*p) << std::endl;
}
