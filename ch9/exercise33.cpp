#include <iostream>
#include <vector>
#include "ch9.h"

using std::vector;
using std::cout;
using std::endl;

void exercise33()
{
	vector<int> v{ 1,2,3,4,5 };
	auto begin = v.begin();
	while (begin != v.end())
	{
		++begin;
		v.insert(begin, 42);
		++begin;
	}

	for (auto i : v)
	{
		cout << i << " ";
	}
	cout << endl;
}
