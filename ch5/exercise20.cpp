#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void exercise20()
{
	string str, pre, repeat;
	while (cin >> str)
	{
		if (str == pre)
		{
			repeat = str;
			break;
		}
		pre = str;
	}
	if (repeat != "")
	{
		cout << "The string " << repeat << " repeated" << endl;
	}
	else
	{
		cout << "no string repeat" << endl;
	}
}
