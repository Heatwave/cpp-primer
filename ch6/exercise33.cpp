#include <iostream>
#include <vector>
#include "ch6.h"

using std::cout;
using std::endl;
using std::vector;

void print_vec_recursive(vector<int> ivec, vector<int>::size_type index)
{
	if (index != ivec.size())
	{
		cout << ivec[index] << ' ';
		print_vec_recursive(ivec, index + 1);
	}
	else
		cout << endl;
}

void exercise33()
{
	vector<int> ivec{ 1,2,3,4,5 };
	print_vec_recursive(ivec, 0);
}
