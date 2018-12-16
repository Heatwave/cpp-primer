#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include "ch10.h"

using std::vector;
using std::fill_n;
using std::back_inserter;
using std::cout;
using std::endl;

void exer6()
{
	vector<int> ivec{ 1,2,4,5,7 };
	fill_n(ivec.begin(), ivec.size(), 0);

	fill_n(back_inserter(ivec), 5, 1);

	for (auto i : ivec)
		cout << i << " ";
	cout << endl;
}
