#include <iostream>
#include <vector>
#include <string>
#include "ch9.h"

using std::vector;
using std::string;
using std::cout;
using std::endl;

void exercise41()
{
	const vector<char> cvec{ 'a','b','c','d' };
	string s(cvec.cbegin(), cvec.cend());
	cout << s << endl;
}
