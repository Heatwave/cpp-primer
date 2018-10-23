#include <vector>
#include <iostream>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main201()
{
	int i;
	vector<int> ivec;

	while (cin >> i)
	{
		ivec.push_back(i);
	}

	for (decltype(ivec.size()) j = 0; j < ivec.size() && j + 1 < ivec.size(); ++j)
	{
		cout << ivec[j] + ivec[j + 1] << " ";
	}

	cout << endl;

	system("pause");
	return EXIT_SUCCESS;
}
