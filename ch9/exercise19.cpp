#include <iostream>
#include <string>
#include <list>
#include "ch9.h"

using std::string;
using std::list;

void exercise19()
{
	string word;
	list<string> slist;
	while (std::cin >> word)
	{
		slist.push_back(word);
	}

	for (const auto &s : slist)
	{
		std::cout << s << " ";
	}
	std::cout << std::endl;
}
