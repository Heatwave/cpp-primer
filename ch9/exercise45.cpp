#include <iostream>
#include <string>
#include "ch9.h"

using std::string;
using std::cout;
using std::endl;

string append_prefix_suffix(string name, const string &prefix, const string &suffix)
{
	name.insert(name.begin(), prefix.cbegin(), prefix.cend());
	name.append(suffix);
	return name;
}

void exercise45()
{
	string name{ "Stan" };
	cout << name << endl << append_prefix_suffix(name, "Mr.", " I") << endl;
}
