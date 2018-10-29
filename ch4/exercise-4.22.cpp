#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

void exercise22()
{
	vector<int> vec{ 100, 27, 31, 67, 84, 92, 100 };
	string finalgrade;
	for (auto grade : vec)
	{
		finalgrade = (grade > 90) ? "high pass"
			: (grade < 60) ? "fail"
			: (grade < 75) ? "low pass" : "pass";
		cout << finalgrade << '\t';
	}
	cout << endl;

	for (auto grade : vec)
	{
		if (grade > 90)
			finalgrade = "high pass";
		else if (grade < 60)
			finalgrade = "fail";
		else if (grade < 75)
			finalgrade = "low pass";
		else
			finalgrade = "pass";
		cout << finalgrade << '\t';
	}
	cout << endl;
}

