#include <cstring>
#include <string>
#include <iostream>
using std::cout;
using std::endl;
using std::strcmp;
using std::string;

int main39()
{
	char cstr[6] = "Hello";
	char cstr2[6] = "World";

	if (strcmp(cstr, cstr2) == 0)
		cout << "cstr equal" << endl;
	else
		cout << "cstr not equal" << endl;

	string str1 = "Hello";
	string str2 = "World";

	if (str1 == str2)
		cout << "str equal" << endl;
	else
		cout << "str not equal" << endl;

	system("pause");
	return EXIT_SUCCESS;
}
