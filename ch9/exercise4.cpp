#include <iostream>
#include <vector>
#include "ch9.h"

using std::vector;

bool find_in_ivec(vector<int>::const_iterator begin, vector<int>::const_iterator end, int val)
{
	while (begin != end)
	{
		if (*begin == val)
			return true;
		++begin;
	}
	return false;
}

void exercise4()
{
	vector<int> ivec{ 1,2,3,4,5 };
	std::cout << find_in_ivec(ivec.cbegin(), ivec.cend(), 3) << std::endl;
	std::cout << find_in_ivec(ivec.cbegin(), ivec.cend(), 0) << std::endl;
}
