#include <iostream>
#include <string>
#include "ch6.h"

void exercise25(int argc, char **argv)
{
	std::string s;
	for (size_t i = 1; i < argc; i++)
	{
		s += argv[i];
	}
	std::cout << s << std::endl;
}
