#include <vector>
#include <string>
#include <iostream>
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main23()
{
	vector<int> ivec{ 1,2,3,4,5,6,7,8,9,0 };
	for (auto ii = ivec.begin(); ii != ivec.end(); ++ii)
		*ii = *ii * 2;
	for (auto ii : ivec)
		cout << ii << ' ';
	cout << endl;

	system("pause");
	return EXIT_SUCCESS;
}
