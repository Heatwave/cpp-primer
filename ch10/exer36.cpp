#include <iostream>
#include <list>
#include <algorithm>
#include "ch10.h"

using std::cin;
using std::cout;
using std::endl;
using std::list;
using std::find;

void exer36()
{
	list<int> ilist{ 1,2,3,4,5,0,5,4,3,2,1 };
	auto zero_index = find(ilist.crbegin(), ilist.crend(), 0);
	cout << *zero_index << endl;
}
