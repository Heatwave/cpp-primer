#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include "ch10.h"

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::sort;
using std::copy;
using std::istream_iterator;
using std::ostream_iterator;

void exer30()
{
	vector<int> ivec;
	istream_iterator<int> in(cin), eof;
	copy(in, eof, std::back_inserter(ivec));
	sort(ivec.begin(), ivec.end());

	ostream_iterator<int> out(cout, " ");
	std::copy(ivec.cbegin(), ivec.cend(), out);
	cout << endl;
}
