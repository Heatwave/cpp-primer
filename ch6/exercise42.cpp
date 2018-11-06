#include <iostream>
#include <string>
#include "ch6.h"

using std::string;

string make_plural(size_t ctr, const string &word, const string &ending = "s")
{
	return (ctr > 1) ? word + ending : word;
}

void exercise42()
{
	std::cout << make_plural(1, "success", "es") << std::endl;
	std::cout << make_plural(3, "success", "es") << std::endl;
	std::cout << make_plural(1, "failure") << std::endl;
	std::cout << make_plural(3, "failure") << std::endl;
}
