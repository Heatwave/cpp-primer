#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;

void exercise25()
{
	int a, b;
	cout << "please enter two integer number: " << endl;
	while (cin >> a >> b)
	{
		try
		{
			if (b == 0)
				throw std::runtime_error("division by zero!");
			cout << a / b << endl;
			break;
		}
		catch (std::runtime_error err)
		{
			cout << err.what() << endl;
			cout << "continue enter press y, exit press n:" << endl;
			char c;
			cin >> c;
			if (c == 'y')
			{
				cout << "please enter two integer number: " << endl;
				continue;
			}
			else
				break;
		}
	}
}
