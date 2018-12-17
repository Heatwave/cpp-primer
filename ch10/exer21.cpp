#include <iostream>
#include "ch10.h"

using std::cout;
using std::endl;

void exer21()
{
	int i = 3;
	auto minus = [&i]() -> bool { --i; return i == 0; };
	while (!minus())
	{
		cout << "i: " << i << endl;
	}
	cout << "i: " << i << endl;
}
