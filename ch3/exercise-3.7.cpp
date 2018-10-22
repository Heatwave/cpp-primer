#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main7()
{
	string s("Hello World!!!");
	for (auto c : s)
		c = 'X';
	cout << s << endl;

	system("pause");
	return 0;
}
