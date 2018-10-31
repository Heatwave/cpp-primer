#include <iostream>

void exercise3()
{
	int sum = 0, val = 1;
	while (sum += val, ++val, val <= 10)
		;
	std::cout << "Sum of 1 to 10 inclusive is "
		<< sum << std::endl;
}
