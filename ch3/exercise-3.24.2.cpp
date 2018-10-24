#include <vector>
#include <iostream>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main242()
{
	int i;
	vector<int> ivec;

	while (cin >> i)
	{
		ivec.push_back(i);
	}

	for (auto ii = ivec.begin(); ii != ivec.begin() + ivec.size() / 2; ++ii)
	{
		cout << *ii + *(ivec.begin() + (ivec.end() - ii) - 1) << ' ';
	}

	cout << endl;

	system("pause");
	return EXIT_SUCCESS;
}
