#include <iostream>
#include <string>
#include "ch9.h"

using std::string;
using std::cout;
using std::endl;

void replace_words_use_replace(string &s, const string &oldVal, const string &newVal)
{
	if (s.size() < oldVal.size())
		return;

	for (size_t i = 0; i < s.size(); )
	{
		if (i + oldVal.size() > s.size())
			break;

		if (s.substr(i, oldVal.size()) == oldVal)
		{
			s.replace(i, oldVal.size(), newVal);
			i += newVal.size();
		}
		else
		{
			++i;
		}
	}
}

void exercise44()
{
	string s{ "Hello, tho, thru" };
	replace_words_use_replace(s, "tho", "though");
	replace_words_use_replace(s, "thru", "through");
	cout << s << endl;

	string s1{ "Hello" };
	replace_words_use_replace(s1, "Hello", "World");
	replace_words_use_replace(s1, "Good", "Bad");
	cout << s1 << endl;
}
