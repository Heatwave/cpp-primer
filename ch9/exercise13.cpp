#include <iostream>
#include <vector>
#include <list>
#include "ch9.h"

using std::vector;
using std::list;

void exercise13()
{
	list<int> ilist{ 1,2,3 };
	vector<double> dvec(ilist.cbegin(), ilist.cend());

	for (const auto d : dvec)
	{
		std::cout << d << " ";
	}
	std::cout << std::endl;

	vector<int> ivec{ 4,5,6 };
	vector<double> dvec1(ivec.cbegin(), ivec.cend());

	for (const auto d : dvec1)
	{
		std::cout << d << " ";
	}
	std::cout << std::endl;
}
