#include <iostream>
#include "ch6.h"

int &get(int *arry, int index)
{
	return arry[index];
}

void exercise32()
{
	int ia[10];
	for (int i = 0; i != 10; ++i)
		get(ia, i) = i;

	for (auto i : ia)
		std::cout << i << ' ';
	std::cout << std::endl;
}
