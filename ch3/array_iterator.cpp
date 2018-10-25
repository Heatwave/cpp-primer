#include <iostream>
#include <iterator>
using std::begin;
using std::end;
using std::cout;
using std::endl;

int mainarriter()
{
	int arr[] = { 0, 2, 3 ,7, -2, 5, 10 };
	int *pbeg = begin(arr), *pend = end(arr);
	while (pbeg != pend && *pbeg >= 0)
	{
		++pbeg;
	}

	if (pbeg != pend)
		cout << *pbeg;
	else
		cout << "no negative number";
	cout << endl;

	system("pause");
	return EXIT_SUCCESS;
}
