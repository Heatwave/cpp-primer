#include <iostream>
#include <vector>
#include "ch9.h"

using std::vector;
using std::cout;
using std::endl;

void exercise34()
{
	vector<int> vi{ 0,1,2,3,4,5 };
	auto iter = vi.begin();
	while (iter != vi.end())
		if (*iter % 2)
			iter = vi.insert(iter, *iter);
	++iter;

	for (auto i : vi)
		cout << i << " ";
	cout << endl;
}
