#include <iostream>
#include <vector>
#include "ch9.h"

using std::vector;
using std::cout;
using std::endl;

void print_size_and_capacity(vector<int> &ivec)
{
	cout << "size: " << ivec.size() << " capacity: " << ivec.capacity() << endl;
}

void exercise38()
{
	vector<int> ivec;
	print_size_and_capacity(ivec);
	for (size_t i = 0; i < 100; i++)
	{
		ivec.push_back(i);
		print_size_and_capacity(ivec);
	}

	ivec.shrink_to_fit();
	print_size_and_capacity(ivec);
}
