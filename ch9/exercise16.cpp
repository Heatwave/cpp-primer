#include <iostream>
#include <vector>
#include <list>
#include "ch9.h"

using std::vector;
using std::list;

void exercise16()
{
	vector<int> v1 = { 1,3,5,7,9,12 };
	list<int> l1 = { 1,3,9 };

	std::cout << (v1 < vector<int>(l1.cbegin(), l1.cend())) << std::endl;
}
