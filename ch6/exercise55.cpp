#include <vector>
#include "ch6.h"

using std::vector;

typedef int(*pFunc)(int, int);

int plusFunc(int a, int b)
{
	return a + b;
}

int minusFunc(int a, int b)
{
	return a - b;
}

int multiFunc(int a, int b)
{
	return a * b;
}

int divideFunc(int a, int b)
{
	return a / b;
}

void exercise55()
{
	vector<pFunc> pvec{ plusFunc, minusFunc, multiFunc, divideFunc };
}
