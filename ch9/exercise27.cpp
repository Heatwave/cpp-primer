#include <iostream>
#include <forward_list>
#include "ch9.h"

using std::forward_list;

void exercise27()
{
	forward_list<int> iflist{ 1,2,3,4,5,6,7,8,9 };
	auto prev = iflist.before_begin(), curr = iflist.begin();
	while (curr != iflist.end())
	{
		if (*curr % 2)
		{
			curr = iflist.erase_after(prev);
		}
		else
		{
			prev = curr;
			++curr;
		}
	}

	for (const auto i : iflist)
	{
		std::cout << i << " ";
	}

	std::cout << std::endl;
}
