#include <iostream>
#include "ch6.h"

int func(int num)
{
	static int abc = 0;
	int asd = 1;
	return abc++;
}

void exercise6()
{
	std::cout << func(1) << std::endl;
	std::cout << func(2) << std::endl;
	std::cout << func(3) << std::endl;
}
