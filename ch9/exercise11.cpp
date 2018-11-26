#include <vector>
#include "ch9.h"

using std::vector;

void exercise11()
{
	vector<int> ivec0;

	vector<int> ivec1(ivec0);
	vector<int> ivec2 = ivec0;

	vector<int> ivec3{ 1,2,3 };
	vector<int> ivec4 = { 1,2,3 };

	vector<int> ivec5(ivec4.cbegin(), ivec4.cend());

	vector<int> ivec6(10);

	vector<int> ivec7(10, 1);
}
