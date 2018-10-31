#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void exercise10()
{
	unsigned vowelCnt = 0;

	char ch;

	while (cin >> ch)
	{
		switch (ch)
		{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			++vowelCnt;
			break;
		default:
			break;
		}
	}

	cout << vowelCnt << endl;
}
