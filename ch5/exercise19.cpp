#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void exercise19()
{
	string s1, s2, rsp;
	do
	{
		cout << "please enter two string: " << endl;
		cin >> s1 >> s2;
		cout << "The shorter string is: " << (s1.size() < s2.size() ? s1 : s2) << endl;
		cout << "Enter \"no\" to exit" << endl;
		cin >> rsp;
	} while (!rsp.empty() && rsp[0] != 'n');
}
