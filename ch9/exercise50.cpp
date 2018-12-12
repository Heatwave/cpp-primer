#include <iostream>
#include <vector>
#include <string>
#include "ch9.h"

using std::vector;
using std::string;
using std::cout;
using std::endl;

void exer50()
{
	vector<string> svec{ "1", "2", "3","4","5" };
	int result = 0;
	for (auto const &s : svec)
	{
		result += std::stoi(s);
	}

	cout << result << endl;

	svec = { "1.5", "0.3", "0.2" };
	double res = 0.0;
	for (auto const &s : svec)
	{
		res += std::stod(s);
	}

	cout << res << endl;
}
