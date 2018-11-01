#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void exercise21()
{
	string str, pre, repeat;
	while (cin >> str)
	{
		if (str == pre)
		{
			if (isupper(str[0])) {
				repeat = str;
				break;
			}
			else
			{
				continue;
			}
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
