#include <iostream>
#include <numeric>
#include <vector>
#include "ch10.h"

using std::vector;
using std::accumulate;
using std::cout;
using std::endl;

void exer3()
{
	vector<int> ivec{ 1,2,4,5,7,5 };
	auto sum = accumulate(ivec.cbegin(), ivec.cend(), 0);
	cout << sum << endl;
}
