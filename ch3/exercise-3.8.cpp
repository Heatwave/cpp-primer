#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main8()
{
	string s("Hello World!!!");

	decltype(s.size()) i = 0;
	while (i != s.size())
	{
		s[i] = 'X';
		++i;
	}
	cout << s << endl;

	s = "Hello World!!!";

	for (string::size_type i = 0; i < s.size(); ++i)
	{
		s[i] = 'X';
	}
	cout << s << endl;

	system("pause");
	return 0;
}
