#include <iostream>

int factorial(int val)
{
	if (val != 0)
		return factorial(val - 1) * val;
	return 1;
}

void exercise34()
{
	std::cout << factorial(5) << std::endl;
}
