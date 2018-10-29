#include <iostream>

using std::cout;
using std::endl;

void exercise27()
{
	unsigned long ul1 = 3, ul2 = 7;
	cout << (ul1 & ul2) << endl;	// 3
	cout << (ul1 | ul2) << endl;	// 7
	cout << (ul1 && ul2) << endl;	// 1
	cout << (ul1 || ul2) << endl;	// 1
}
