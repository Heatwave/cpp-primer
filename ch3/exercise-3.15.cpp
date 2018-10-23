#include <vector>
#include <iostream>
#include <string>
using std::vector;
using std::cin;
using std::string;

int main15()
{
	string s;
	vector<string> svec;
	while (cin >> s)
	{
		svec.push_back(s);
	}

	return EXIT_SUCCESS;
}
