#include <iostream>
#include <vector>
#include "ch6.h"

using std::vector;

typedef int(*pFunc)(int, int);

void exercise56()
{
	vector<pFunc> pvec{ plusFunc, minusFunc, multiFunc, divideFunc };
	for (auto pf : pvec)
	{
		std::cout << pf(10, 5) << std::endl;
	}
}
