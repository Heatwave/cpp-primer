#include <iostream>
#include <fstream>
#include <string>
#include "ch9.h"

using std::string;
using std::cout;
using std::endl;

void exercise49()
{
	string nonAscenderAndDescender{ "acemnorsuvwxz" };

	std::ifstream f("words.txt");

	string longest;

	for (string curr; f >> curr; )
	{
		if (curr.find_first_not_of(nonAscenderAndDescender) == string::npos && curr.size() > longest.size())
		{
			longest = curr;
		}
	}

	cout << longest << endl;
}
