#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <forward_list>
#include <algorithm>
#include <iterator>
#include "ch10.h"

using std::cout;
using std::endl;

void exer28()
{
	std::vector<int> ivec{ 1,2,3,4,5,6,7,8,9 };
	std::list<int> ilist;
	std::deque<int> ideque;
	std::forward_list<int> iflist;

	std::copy(ivec.cbegin(), ivec.cend(), std::inserter(ilist, ilist.begin()));
	std::copy(ivec.cbegin(), ivec.cend(), std::back_inserter(ideque));
	std::copy(ivec.cbegin(), ivec.cend(), std::front_inserter(iflist));

	for (auto i : ilist)
	{
		cout << i << " ";
	}
	cout << endl;
	for (auto i : ideque)
	{
		cout << i << " ";
	}
	cout << endl;
	for (auto i : iflist)
	{
		cout << i << " ";
	}
	cout << endl;
}
