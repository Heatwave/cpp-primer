#include <iostream>
#include <vector>

using std::vector;

bool exercise17()
{
	vector<int> ivec0{ 1,2,3,4 };
	vector<int> ivec1{ 1,2,3,4,3 };

	decltype(ivec0.cbegin()) long_beg, short_beg;
	decltype(ivec0.cend()) long_end, short_end;

	if (ivec0.size() > ivec1.size())
	{
		long_beg = ivec0.cbegin();
		short_beg = ivec1.cbegin();
		long_end = ivec0.cend();
		short_end = ivec1.cend();
	}
	else if (ivec0.size() < ivec1.size())
	{
		long_beg = ivec1.cbegin();
		short_beg = ivec0.cbegin();
		long_end = ivec1.cend();
		short_end = ivec0.cend();
	}
	else
	{
		long_beg = ivec1.cbegin();
		short_beg = ivec0.cbegin();
		long_end = ivec1.cend();
		short_end = ivec0.cend();
	}

	for (; short_beg != short_end && *short_beg == *long_beg; ++short_beg, ++long_beg)
		;
	if (short_beg == short_end)
		return true;
	else
		return false;
}
