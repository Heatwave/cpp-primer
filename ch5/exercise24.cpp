#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;

void exercise24()
{
	int a, b;
	cin >> a >> b;
	if (b == 0)
		throw std::runtime_error("division by zero!");
	else
		cout << a / b << endl;
}
