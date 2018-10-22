#include <iostream>
#include <string>
#include <cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ispunct;

int mainrangefor()
{
	string s("Hello World!!!");
	decltype(s.size()) punct_cnt = 0;
	for (auto c : s)
		if (ispunct(c))
			++punct_cnt;
	cout << punct_cnt << " punctuation characters in " << s << endl;

	system("pause");
	return 0;
}
