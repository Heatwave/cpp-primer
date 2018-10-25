#include <iostream>
#include <iterator>
using std::begin;
using std::end;
using std::cout;
using std::endl;

int main35()
{
	int arr[10];
	int *pbeg = begin(arr), *pend = end(arr);
	while (pbeg != pend)
	{
		*pbeg = 0;
		++pbeg;
	}

	for (auto i : arr)
		cout << i << ' ';
	cout << endl;

	system("pause");
	return EXIT_SUCCESS;
}
