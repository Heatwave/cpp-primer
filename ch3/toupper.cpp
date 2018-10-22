#include <iostream>
#include <string>
#include <cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::toupper;

int maintoupper()
{
	string s("Hello World!!!");
	for (auto &c : s)
		c = toupper(c);
	cout << s << endl;

	system("pause");
	return 0;
}
