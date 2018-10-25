#include <iostream>
#include <vector>
#include <iterator>
using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main42()
{
	vector<int> ivec{ 1,2,3,4,5 };
	int ia[5];

	for (size_t i = 0; i < ivec.size(); ++i)
	{
		ia[i] = ivec[i];
	}

	for (auto i : ia)
		cout << i << ' ';
	cout << endl;

	system("pause");
	return EXIT_SUCCESS;
}
