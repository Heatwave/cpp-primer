#include <iostream>
#include <string>
#include "ch9.h"

using std::string;
using std::cout;
using std::endl;

string numbers{ "0123456789" };
string chars{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };

void findNumberAndCharOf(const string &s)
{
	string::size_type pos = 0;
	while ((pos = s.find_first_of(numbers, pos)) != string::npos)
	{
		cout << "number: " << s[pos] << " at index: " << pos << endl;
		++pos;
	}

	pos = 0;
	while ((pos = s.find_first_of(chars, pos)) != string::npos)
	{
		cout << "char: " << s[pos] << " at index: " << pos << endl;
		++pos;
	}
}


void findNumberAndCharNotOf(const string &s)
{
	string::size_type pos = 0;
	while ((pos = s.find_first_not_of(chars, pos)) != string::npos)
	{
		cout << "number: " << s[pos] << " at index: " << pos << endl;
		++pos;
	}

	pos = 0;
	while ((pos = s.find_first_not_of(numbers, pos)) != string::npos)
	{
		cout << "char: " << s[pos] << " at index: " << pos << endl;
		++pos;
	}
}

void exercise47()
{
	string s{ "ab2c3d7R4E6" };
	cout << "first of: " << endl;
	findNumberAndCharOf(s);
	cout << endl << "first not of: " << endl;
	findNumberAndCharNotOf(s);
}
