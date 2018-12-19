#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include "ch10.h"

using std::cin;
using std::cout;
using std::endl;
using std::list;

void exer37()
{
	vector<int> ivec{ 0,1,2,3,4,5,6,7,8,9 };
	list<int> ilist(5);
	std::copy(ivec.crbegin() + 3, ivec.crend() - 2, ilist.begin());
	for (auto i : ilist)
		cout << i << " ";
	cout << endl;
}
