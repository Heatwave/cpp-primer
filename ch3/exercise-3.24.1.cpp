#include <vector>
#include <iostream>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main241()
{
	int i;
	vector<int> ivec;

	while (cin >> i)
	{
		ivec.push_back(i);
	}

	for (auto ii = ivec.begin(); ii != ivec.end() && (ii + 1) != ivec.end(); ++ii)
	{
		cout << *ii + *(ii + 1) << ' ';
	}

	cout << endl;

	system("pause");
	return EXIT_SUCCESS;
}
