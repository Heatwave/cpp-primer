#include <iostream>
#include "ch6.h"

void reset(int &i)
{
	i = 0;
}

void exercise11()
{
	int i = 10;
	std::cout << i << std::endl;
	reset(i);
	std::cout << i << std::endl;
}
