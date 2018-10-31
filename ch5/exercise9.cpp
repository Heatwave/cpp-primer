#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void exercise9()
{
	unsigned vowelCnt = 0;

	char ch;

	while (cin >> ch)
	{
		switch (ch)
		{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			++vowelCnt;
			break;
		default:
			break;
		}
	}

	cout << vowelCnt << endl;
}
