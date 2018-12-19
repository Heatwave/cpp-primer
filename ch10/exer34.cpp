#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include "ch10.h"

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::copy;

void exer34()
{
	vector<int> ivec{ 1,2,3,4,5 };
	std::ostream_iterator<int> out_iter(cout, " ");
	copy(ivec.crbegin(), ivec.crend(), out_iter);
	cout << endl;
}
