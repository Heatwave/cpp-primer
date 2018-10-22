#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

int main2()
{
	string temp;
	getline(cin, temp);
	cout << temp << endl;

	cin >> temp;
	cout << temp << endl;

	system("pause");
	return 0;
}
