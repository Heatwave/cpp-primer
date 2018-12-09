#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include "ch9.h"

using std::vector;
using std::list;
using std::forward_list;

void vec()
{
	vector<int> vi = { 0,1,2,3,4,5,6,7,8,9 };
	auto iter = vi.begin();
	while (iter != vi.end())
	{
		if (*iter % 2)
		{
			iter = vi.insert(iter, *iter);
			iter += 2;
		}
		else
		{
			iter = vi.erase(iter);
		}
	}

	for (auto i : vi)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;
}

void lis()
{
	list<int> vi = { 0,1,2,3,4,5,6,7,8,9 };
	auto iter = vi.begin();
	while (iter != vi.end())
	{
		if (*iter % 2)
		{
			iter = vi.insert(iter, *iter);
			++iter;
			++iter;
		}
		else
		{
			iter = vi.erase(iter);
		}
	}

	for (auto i : vi)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;
}

void flis()
{
	forward_list<int> vi = { 0,1,2,3,4,5,6,7,8,9 };
	auto curr = vi.begin(), prev = vi.before_begin();
	while (curr != vi.end())
	{
		if (*curr % 2)
		{
			curr = vi.insert_after(curr, *curr);
			prev = curr;
			++curr;
		}
		else
		{
			curr = vi.erase_after(prev);
		}
	}

	for (auto i : vi)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;
}

void exercise31()
{
	std::cout << "vector: ";
	vec();
	std::cout << "list: ";
	lis();
	std::cout << "foward_list: ";
	flis();
}
