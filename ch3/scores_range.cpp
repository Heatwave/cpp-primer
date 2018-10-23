#include <vector>
#include <iostream>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int mainscores()
{
	vector<unsigned> scores(11, 0);
	unsigned grade;

	while (cin >> grade)
	{
		if (grade <= 100)
			++scores[grade / 10];
	}

	for (auto u : scores)
		cout << u << " ";
	cout << endl;

	system("pause");
	return EXIT_SUCCESS;
}
