#include <iostream>
#include <string>
#include "ch9.h"

using std::string;
using std::cout;
using std::endl;

string insert_prefix_suffix(string name, const string &prefix, const string &suffix)
{
	name.insert(0, prefix);
	name.insert(name.size(), suffix);
	return name;
}

void exercise46()
{
	string name{ "Stan" };
	cout << name << endl << insert_prefix_suffix(name, "Mr.", " I") << endl;
}
