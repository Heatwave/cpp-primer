#include <iostream>
#include "ch6.h"

void swapP(int *(&a), int *(&b))
{
	auto temp = a;
	a = b;
	b = temp;
}

void exercise22()
{
	int a = 1, b = 2;
	int *ap = &a;
	int *bp = &b;
	std::cout << *ap << ' ' << *bp << std::endl;
	swapP(ap, bp);
	std::cout << *ap << ' ' << *bp << std::endl;
}
