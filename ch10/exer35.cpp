#include <iostream>
#include <vector>
#include <iterator>
#include "ch10.h"

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void exer35()
{
	vector<int> ivec{ 1,2,3,4,5 };
	std::ostream_iterator<int> out_iter(cout, " ");
	auto end = ivec.cend(), begin = ivec.cbegin();
	while (end != begin)
	{
		*out_iter++ = *--end;
	}
	cout << endl;
}
