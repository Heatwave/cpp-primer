#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>
#include "ch10.h"

using std::cout;
using std::endl;

void exer27()
{
	std::vector<int> ivec{ 1,1,2,5,6,7,8,8,9,9 };
	std::list<int> ilist;
	std::unique_copy(ivec.cbegin(), ivec.cend(), std::front_inserter(ilist));

	for (auto i : ilist)
	{
		cout << i << " ";
	}
	cout << endl;
}
