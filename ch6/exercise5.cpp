#include <iostream>
#include "ch6.h"

int absoluate(int num)
{
	if (num < 0)
		return -num;
	else
		return num;
}

void exercise5()
{
	int num = -20;
	int result = absoluate(num);
	std::cout << result << std::endl;
}
