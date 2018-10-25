#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int mainscoresrangearr()
{
	unsigned scores[11] = {};
	unsigned grade;
	while (cin >> grade)
	{
		if (grade <= 100)
			++scores[grade / 10];
	}

	for (auto i : scores)
		cout << i << ' ';
	cout << endl;

	system("pause");
	return EXIT_SUCCESS;
}
