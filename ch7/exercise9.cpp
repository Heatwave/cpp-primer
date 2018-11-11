#include <iostream>
#include <cstdlib>
#include "Person.h"

int exercise9()
{
	Person per;

	read(std::cin, per);
	print(std::cout, per) << std::endl;

	return EXIT_SUCCESS;
}
