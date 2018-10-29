#include <iostream>
using std::cout;
using std::endl;

void exercise13()
{
	int i; double d;
	d = i = 3.5;
	cout << "i: " << i << " d: " << d << endl;
	i = d = 3.5;
	cout << "i: " << i << " d: " << d << endl;
}
