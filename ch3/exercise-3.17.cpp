#include <vector>
#include <string>
#include <iostream>
#include <cctype>
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::toupper;

string str_toupper(string);

int main17()
{
	string s;
	vector<string> svec;
	while (cin >> s)
	{
		svec.push_back(s);
	}

	for (auto &_s : svec)
		_s = str_toupper(_s);

	for (auto _s : svec)
		cout << _s << endl;

	system("pause");
	return EXIT_SUCCESS;
}

string str_toupper(string s)
{
	for (auto &c : s)
		c = toupper(c);
	return s;
}
