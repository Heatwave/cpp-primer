#include <iostream>
using std::cout;
using std::endl;

int main31()
{
	int ia[10] = {};
	for (size_t i = 0; i < 10; i++)
	{
		ia[i] = (int)i;
	}

	for (auto i : ia)
		cout << i << ' ';
	cout << endl;

	system("pause");
	return EXIT_SUCCESS;
}
