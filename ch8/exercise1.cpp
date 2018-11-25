#include <iostream>
#include <string>

#include "ch8.h"

std::istream &process_in(std::istream &in)
{
	std::string temps;
	while (!in.eof())
	{
		in >> temps;
		std::cout << temps;
	}
	in.clear();
	return in;
}

void exercise1()
{
	std::istream &is = process_in(std::cin);
	std::cout << is.rdstate();
}
