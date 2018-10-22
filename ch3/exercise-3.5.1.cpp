#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main51()
{
	string str, result;
	while (cin >> str)
	{
		result += str;
	}
	cout << result << endl;

	system("pause");
	return 0;
}
