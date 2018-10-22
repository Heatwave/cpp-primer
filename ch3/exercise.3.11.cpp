#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main11()
{
	const string s = "Keep out!";
	for (auto &c : s)
		cout << c;

	system("pause");
	return 0;
}
