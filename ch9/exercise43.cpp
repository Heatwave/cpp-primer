#include <iostream>
#include <string>
#include "ch9.h"

using std::string;
using std::cout;
using std::endl;

void replace_words(string &s, const string &oldVal, const string &newVal)
{
	if (s.size() < oldVal.size())
		return;

	for (size_t i = 0; i < s.size(); )
	{
		if (i + oldVal.size() > s.size())
			break;

		if (s.substr(i, oldVal.size()) == oldVal)
		{
			s.erase(i, oldVal.size());
			s.insert(i, newVal);
			i += newVal.size();
		}
		else
		{
			++i;
		}
	}
}

void replace_words_iter(string &s, const string &oldVal, const string &newVal)
{
	if (s.size() < oldVal.size())
		return;

	for (auto begin = s.begin(); begin < s.end(); )
	{
		if (begin > s.end() - oldVal.size())
			break;

		string tempStr{ begin, begin + oldVal.size() };
		if (tempStr == oldVal)
		{
			begin = s.erase(begin, begin + oldVal.size());
			begin = s.insert(begin, newVal.begin(), newVal.end());
			begin += newVal.size();
		}
		else
		{
			++begin;
		}
	}
}

void exercise43()
{
	string s{ "Hello, tho, thru" };
	replace_words(s, "tho", "though");
	replace_words(s, "thru", "through");
	cout << s << endl;

	string s1{ "Hello" };
	replace_words(s1, "Hello", "World");
	replace_words(s1, "Good", "Bad");
	cout << s1 << endl;

	string s2{ "Good" };
	replace_words_iter(s2, "Hello", "World");
	replace_words_iter(s2, "Good", "Bad");
	cout << s2 << endl;
}
