#include <iostream>

void exercise36()
{
	int i = 5;
	double d = 1.5;
	i *= static_cast<int>(d);
	std::cout << i << std::endl;
}
