#include <iostream>
#include <initializer_list>
#include "ch6.h"

using std::initializer_list;

int calc(initializer_list<int> il)
{
	int result = 0;
	for (auto i = il.begin(); i != il.end(); ++i)
	{
		result += *i;
	}
	return result;
}

void exercise27()
{
	int n = calc({ 1,2,3,4,5 });
	std::cout << n << std::endl;
}
