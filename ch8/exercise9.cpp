#include <iostream>
#include <string>
#include <sstream>

#include "ch8.h"

std::istream &process_in_ss(std::istream &in)
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

void exercise9()
{
	std::istringstream ss("Hello");
	std::istream &is = process_in_ss(ss);
	std::cout << std::endl << is.rdstate() << std::endl;
}
