#include <iostream>
#include <vector>
#include "ch6.h"

using std::cout;
using std::endl;
using std::vector;

void print_vec_recursive_debug(vector<int> ivec, vector<int>::size_type index)
{
	if (index != ivec.size())
	{
#ifndef NDEBUG
		cout << "size: " << ivec.size() << endl;
#endif // !NDEBUG

		cout << "ivec[" << index << "]:"  << ivec[index] << endl;
		print_vec_recursive_debug(ivec, index + 1);
	}
	else
		cout << endl;
}

void exercise47()
{
	vector<int> ivec{ 1,2,3,4,5 };
	print_vec_recursive_debug(ivec, 0);
}
