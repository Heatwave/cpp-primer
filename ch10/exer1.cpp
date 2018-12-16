#include <iostream>
#include <algorithm>
#include <vector>
#include "ch10.h"

using std::vector;
using std::count;
using std::cout;
using std::endl;

void exer1()
{
	vector<int> ivec{ 1,2,4,5,7,5,3,5,7,9,4,6,8,1,2,5,7,5 };
	auto show_count = count(ivec.cbegin(), ivec.cend(), 5);
	cout << show_count << endl;
}
