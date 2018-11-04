#include <iostream>
#include <iterator>
#include "ch6.h"

using std::cout;
using std::endl;

void print(const int i, const int *beg, const int *end)
{
	cout << i << endl;
	while (beg != end)
	{
		cout << *beg++ << ' ';
	}
	cout << endl;
	cout << endl;
}
void print(const int i, const int j[], const int size)
{
	cout << i << endl;
	for (size_t n = 0; n < size; n++)
	{
		cout << j[n] << ' ';
	}
	cout << endl;
	cout << endl;
}

void exercise23()
{
	int i = 0, j[2] = { 0,1 };
	print(i, std::begin(j), std::end(j));
	print(i, j, std::end(j) - std::begin(j));
}
