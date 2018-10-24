#include <vector>
#include <iostream>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int mainbsearch()
{
	vector<int> ivec{ 1,2,3,4,5 };
	int sought = 5;

	auto beg = ivec.begin(), end = ivec.end();
	auto mid = ivec.begin() + (end - beg) / 2;
	while (mid != end && *mid != sought)
	{
		if (sought < *mid)
			end = mid;
		else
			beg = mid + 1;
		mid = beg + (end - beg) / 2;
	}

	if (mid != end)
		cout << *mid << endl;
	else
		cout << "not found" << endl;

	system("pause");
	return EXIT_SUCCESS;
}
