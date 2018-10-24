#include <vector>
#include <iostream>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main25()
{
	vector<unsigned> scores(11, 0);
	unsigned grade;

	auto iu = scores.begin();

	while (cin >> grade)
	{
		if (grade <= 100)
			++*(iu + grade / 10);
	}

	for (auto u : scores)
		cout << u << " ";
	cout << endl;

	system("pause");
	return EXIT_SUCCESS;
}
