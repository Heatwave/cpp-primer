#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

void exercise23()
{
	string s = "word";
	string pl = s + (s[s.size() - 1] == 's' ? "" : "s");
	cout << pl << endl;
}
