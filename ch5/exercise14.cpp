#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void exercise14()
{
	string str;
	vector<string> svec;

	while (cin >> str)
	{
		svec.push_back(str);
	}

	string maxStr;
	unsigned count = 0, maxCount = 0;

	if (svec.size() == 0)
		return;

	str = svec[0];

	auto cur = svec.cbegin();
	while (cur != svec.cend())
	{
		if (*cur == str)
		{
			++count;
		}
		else
		{
			count = 1;
		}

		if (count >= maxCount)
		{
			maxStr = *cur;
			maxCount = count;
		}

		str = *cur;
		++cur;
	}

	if (maxCount == 1)
		cout << "no repeat words" << endl;
	else
		cout << maxStr << " appear " << maxCount << " times" << endl;
}
