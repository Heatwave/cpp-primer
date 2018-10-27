#include <iostream>
using std::cout;
using std::endl;

int main()
{
	constexpr size_t rowCnt = 3, colCnt = 4;
	int ia[rowCnt][colCnt];

	for (size_t i = 0; i != rowCnt; ++i)
		for (size_t j = 0; j != colCnt; ++j)
			ia[i][j] = i * colCnt + j;

	// range for
	for (auto &i : ia)
		for (auto j : i)
			cout << j << ' ';
	cout << endl;

	// for
	for (size_t i = 0; i < rowCnt; i++)
		for (size_t j = 0; j < colCnt; j++)
			cout << ia[i][j] << ' ';
	cout << endl;

	// for with pointers
	for (auto i = ia; i != ia + rowCnt; ++i)
		for (auto j = *i; j != *i + colCnt; ++j)
			cout << *j << ' ';
	cout << endl;

	system("pause");
	return EXIT_SUCCESS;
}
