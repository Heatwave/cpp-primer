#include <iostream>
#include <vector>
#include <iterator>
using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main41()
{
	int ia[] = { 1,2,3,4,5 };
	vector<int> ivec(begin(ia), end(ia));

	for (auto i : ivec)
		cout << i << ' ';
	cout << endl;

	system("pause");
	return EXIT_SUCCESS;
}
