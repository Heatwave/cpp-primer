#include <iostream>
#include <vector>
#include <list>
#include "ch9.h"

using std::vector;
using std::list;

void exercise26()
{
	int ia[] = { 0,1,1,2,3,5,8,13,21,55,89 };
	vector<int> ivec(ia, std::end(ia));
	list<int> ilist(ia, std::end(ia));

	//for (auto const i : ia)
	//{
	//	ivec.push_back(i);
	//	ilist.push_back(i);
	//}

	auto iter = ivec.begin();
	while (iter != ivec.end())
	{
		if (*iter % 2 == 0)
		{
			iter = ivec.erase(iter);
		}
		else
		{
			++iter;
		}
	}

	auto it = ilist.begin();
	while (it != ilist.end())
	{
		if (*it % 2 != 0)
		{
			it = ilist.erase(it);
		}
		else
		{
			++it;
		}
	}

	std::cout << "vector:\t";
	for (const auto i : ivec)
		std::cout << i << " ";
	std::cout << std::endl;

	std::cout << "list:\t";
	for (const auto i : ilist)
		std::cout << i << " ";
	std::cout << std::endl;
}
