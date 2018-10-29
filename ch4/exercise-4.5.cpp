#include <iostream>

using std::cout;
using std::endl;

void exercise5()
{
	int result = -30 * 3 + 21 / 5;	// -86
	cout << result << endl;
	result = -30 + 3 * 21 / 5;	// -18
	cout << result << endl;
	result = 30 / 3 * 21 % 5;	// 0
	cout << result << endl;
	result = -30 / 3 * 21 % 4;	// -2
	cout << result << endl;
}
