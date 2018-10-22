#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main4()
{
	string s1, s2;
	cin >> s1 >> s2;

	if (s1 == s2)
		cout << s1 << " equal to " << s2 << endl;
	else if (s1 > s2)
		cout << s1 << " is bigger" << endl;
	else
		cout << s2 << " is bigger" << endl;


	cin >> s1 >> s2;

	if (s1.size() == s2.size())
		cout << s1 << " size equal to " << s2 << endl;
	else if (s1.size() > s2.size())
		cout << s1 << " size is bigger" << endl;
	else
		cout << s2 << " size is bigger" << endl;	

	system("pause");
	return 0;
}
