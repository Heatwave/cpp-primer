#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

void exercise31()
{
	vector<int> ivec{ 1,2,3,4,5 };
	vector<int>::size_type cnt = ivec.size();
	for (vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--)
		ivec[ix] = cnt;

	for (auto &i : ivec)
		cout << i << ' ';
	cout << endl;
}
