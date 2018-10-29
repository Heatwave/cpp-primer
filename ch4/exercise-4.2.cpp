#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

void exercise2()
{
	vector<int> vec{ 1, 2, 3, 4, 5 };
	cout << (*((vec.begin)())) << endl;
	cout << ((*((vec.begin)())) + 1) << endl;
}
