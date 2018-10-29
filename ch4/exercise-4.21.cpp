#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

void exercise21()
{
	vector<int> vec{ 1, 2, 3, 4, 5 };
	for (auto &i : vec) {
		i = i % 2 == 0 ? i : i * 2;
		cout << i << ' ';
	}
	cout << endl;
}
