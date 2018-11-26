#include <iostream>
#include <vector>
#include "ch9.h"

using std::vector;

vector<int>::const_iterator find_in_ivec_iter(vector<int>::const_iterator begin, vector<int>::const_iterator end, int val)
{
	while (begin != end)
	{
		if (*begin == val)
			return begin;
		++begin;
	}
	return end;
}

void exercise5()
{
	vector<int> ivec{ 1,2,3,4,5 };

	auto iter = find_in_ivec_iter(ivec.cbegin(), ivec.cend(), 3);
	if (iter != ivec.cend())
		std::cout << *iter << std::endl;

	iter = find_in_ivec_iter(ivec.cbegin(), ivec.cend(), 0);
	if (iter != ivec.cend())
		std::cout << *iter << std::endl;
}
