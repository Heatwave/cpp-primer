#include <iostream>
#include <string>
#include <cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ispunct;

int main10()
{
	string s, t;
	cin >> s;

	if (s.size() <= 0) {
		cout << "Enter string!" << endl;
		return -1;
	}

	for (auto c : s)
		if (!ispunct(c))
			t += c;

	cout << t << endl;

	system("pause");
	return 0;
}
