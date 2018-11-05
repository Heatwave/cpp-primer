#include <iostream>
#include <string>
#include "ch6.h"

using std::string;

bool str_subrange(const string &str1, const string &str2)
{
	if (str1.size() == str2.size())
		return str1 == str2;

	auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();

	for (decltype(size) i = 0; i != size; ++i)
	{
		if (str1[i] != str2[i])
			return false;
	}
	return true;
}

void exercise30()
{
	bool res = str_subrange("Hello", "Hel");
	std::cout << res << std::endl;
}
