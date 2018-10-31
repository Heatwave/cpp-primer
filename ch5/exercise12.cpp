#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void exercise12()
{
	unsigned vowelCnt = 0, spaceCnt = 0, tabCnt = 0, newlineCnt = 0, ffCnt = 0, flCnt = 0, fiCnt = 0;

	char ch, pre = 0;

	while (cin >> std::noskipws >> ch)
	{
		switch (ch)
		{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
			if (pre == 'f')
				++fiCnt;
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
		case 'f':
			if (pre == 'f')
				++ffCnt;
			break;
		case 'l':
			if (pre == 'f')
				++flCnt;
			break;
		default:
			break;
		}
		pre = ch;
	}

	cout << vowelCnt << endl;
	cout << spaceCnt << endl;
	cout << tabCnt << endl;
	cout << newlineCnt << endl;
	cout << ffCnt << endl;
	cout << flCnt << endl;
	cout << fiCnt << endl;
}
