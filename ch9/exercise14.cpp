#include <iostream>
#include <vector>
#include <list>
#include <string>
#include "ch9.h"

using std::vector;
using std::list;
using std::string;

void exercise14()
{
	vector<string> svec;
	list<const char*> clist{ "Hello", "World" };

	svec.assign(clist.cbegin(), clist.cend());

	for (const auto &s : svec)
	{
		std::cout << s << std::endl;
	}
}
