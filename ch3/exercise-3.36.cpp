#include <iostream>
#include <iterator>
#include <vector>
using std::begin;
using std::end;
using std::cout;
using std::endl;
using std::vector;

int main36()
{
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[5] = { 1,2,3,4,5 };
	int *pbeg1 = begin(arr1), *pend1 = end(arr1);
	int *pbeg2 = begin(arr2), *pend2 = end(arr2);

	if ((pend1 - pbeg1) != (pend2 - pbeg2))
	{
		cout << "arr size not equal" << endl;
		system("pause");
		return EXIT_FAILURE;
	}

	while (pbeg1 != pend1)
	{
		if (*pbeg1 != *pbeg2)
		{
			cout << "arr not equal" << endl;
			system("pause");
			return EXIT_FAILURE;
		}
		++pbeg1;
		++pbeg2;
	}

	if (pbeg1 == pend1)
		cout << "array equal" << endl;

	vector<int> iv1{ 1,2,3,4,5 };
	vector<int> iv2(iv1);

	if (iv1 == iv2)
		cout << "vector equal" << endl;
	else
		cout << "vector not equal" << endl;

	system("pause");
	return EXIT_SUCCESS;
}
