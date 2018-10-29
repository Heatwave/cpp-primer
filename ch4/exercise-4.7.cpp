#include <iostream>

using std::cout;
using std::endl;

void exercise7()
{
	short overflow_short = 32768;
	cout << overflow_short << endl;

	int overflow_int = 2147483648;
	cout << overflow_int << endl;

	unsigned overflow_unsigned = -1;
	cout << overflow_unsigned << endl;
}
