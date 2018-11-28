#include <iostream>
#include <string>
#include <deque>
#include "ch9.h"

using std::string;
using std::deque;

void exercise18()
{
	string word;
	deque<string> sq;
	while (std::cin >> word)
	{
		sq.push_back(word);
	}

	for (const auto &s : sq)
	{
		std::cout << s << " ";
	}
	std::cout << std::endl;
}
