#include <vector>
#include "ch6.h"

using std::vector;

typedef int(*pFunc)(int, int);

void exercise54()
{
	vector<pFunc> pvec;
	vector<decltype(func)*> pvec1;
}
