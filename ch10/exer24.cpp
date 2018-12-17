#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include "ch10.h"

using std::cout;
using std::endl;
using std::string;
using std::vector;

using namespace std::placeholders;

bool check_size(int i, string::size_type sz)
{
	return i > sz;
}

void exer24()
{
	string s{ "Hello" };
	vector<int> ivec{ 3,5,8,5,4,2,1,5 };
	auto pos = std::find_if(ivec.cbegin(), ivec.cend(), std::bind(check_size, _1, s.size()));
	if (pos != ivec.cend())
		cout << *pos << endl;
	else
		cout << "not found" << endl;
}
