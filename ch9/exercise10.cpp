#include <iostream>
#include <vector>
#include "ch9.h"

using std::vector;

void exercise10()
{
	vector<int> v1;
	const vector<int> v2;

	auto it1 = v1.begin();
	auto it2 = v2.begin();
	auto it3 = v1.cbegin(), it4 = v2.cbegin();
}
