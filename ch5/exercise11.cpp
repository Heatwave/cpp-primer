#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void exercise11()
{
	unsigned vowelCnt = 0, spaceCnt = 0, tabCnt = 0, newlineCnt = 0;

	char ch;

	while (cin >> std::noskipws >> ch)
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
		case ' ':
			++spaceCnt;
			break;
		case '\t':
			++tabCnt;
			break;
		case '\n':
			++newlineCnt;
			break;
		default:
			break;
		}
	}

	cout << vowelCnt << endl;
	cout << spaceCnt << endl;
	cout << tabCnt << endl;
	cout << newlineCnt << endl;
}
