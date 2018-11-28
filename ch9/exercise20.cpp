#include <iostream>
#include <list>
#include <deque>
#include "ch9.h"

using std::string;
using std::list;
using std::deque;

void exercise20()
{
	list<int> slist{ 1,2,3,4,5 };
	deque<int> oddq, evenq;

	for (const auto i : slist)
	{
		if (i % 2 == 0)
			evenq.push_back(i);
		else
			oddq.push_back(i);
	}

	std::cout << "odd: ";
	for (const auto i : oddq)
	{
		std::cout << i << " ";
	}

	std::cout << std::endl << "even: ";
	for (const auto i : evenq)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;
}
