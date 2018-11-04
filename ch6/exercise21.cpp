#include <iostream>
#include "ch6.h"

int compare(const int a, const int *b)
{
	return (a > *b ? a : *b);
}

void exercise21()
{
	int i = 10;
	std::cout << compare(1, &i) << std::endl;
}
