#include <iostream>
#include <string>
using std::string;

int mainstringinit()
{
	string s1;
	std::cout << s1 << std::endl;

	string s2 = s1;
	std::cout << s2 << std::endl;

	string s3 = "hiya";
	std::cout << s3 << std::endl;

	string s4(10, 'c');
	std::cout << s4 << std::endl;

	string s5 = "hiya";
	std::cout << s5 << std::endl;

	string s6("hiya");
	std::cout << s6 << std::endl;

	string s7(10, 'c');
	std::cout << s7 << std::endl;

	string s8 = string(10, 'c');
	std::cout << s8 << std::endl;

	system("pause");
	return 0;
}
