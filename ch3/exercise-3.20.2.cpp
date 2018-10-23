#include <vector>
#include <iostream>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main202()
{
	int i;
	vector<int> ivec;

	while (cin >> i)
	{
		ivec.push_back(i);
	}

	for (decltype(ivec.size()) j = 0, k = ivec.size() - 1; j < ivec.size() / 2 && k > 0; ++j, --k)
	{
		cout << ivec[j] + ivec[k] << " ";
	}

	cout << endl;

	system("pause");
	return EXIT_SUCCESS;
}
