#include <iostream>
#include "ch6.h"

int invoke_count()
{
	static int count = 0;
	return count++;
}

void exercise7()
{
	std::cout << invoke_count() << std::endl;
	std::cout << invoke_count() << std::endl;
	std::cout << invoke_count() << std::endl;
}
