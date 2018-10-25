#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main32()
{
	int ia[10] = {};
	int int_arr[10] = {};
	for (size_t i = 0; i < 10; i++)
	{
		ia[i] = (int)i;
	}

	for (size_t i = 0; i < 10; i++)
	{
		int_arr[i] = ia[i];
	}

	for (auto i : int_arr)
		cout << i << ' ';
	cout << endl;

	vector<int> iv(10);
	for (int i = 0; i != iv.size(); ++i)
	{
		iv[i] = i;
	}
	vector<int> ivec(iv);

	for (auto i : ivec)
		cout << i << ' ';
	cout << endl;

	system("pause");
	return EXIT_SUCCESS;
}
