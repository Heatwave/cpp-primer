#include <iostream>
#include <string>
#include "ch6.h"

using std::string;

bool hasUpper(const string &s)
{
	for (auto c : s)
	{
		if (isupper(c))
			return true;
	}
	return false;
}

void strToLower(string &s)
{
	for (auto &c : s)
	{
		c = tolower(c);
	}
}

void exercise17()
{
	string s = "Hello";
	std::cout << hasUpper(s) << std::endl;

	strToLower(s);
	std::cout << s << std::endl;
}
