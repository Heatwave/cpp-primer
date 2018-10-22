#include <iostream>
#include <string>
#include <cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::toupper;
using std::isspace;

int mainstringindex()
{
	string s("some string");
	for (decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]); ++index)
	{
		s[index] = toupper(s[index]);
	}
	cout << s << endl;

	system("pause");
	return 0;
}
