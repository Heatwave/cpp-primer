#include <cstring>
#include <iostream>
using std::cout;
using std::endl;

int main40()
{
	char cstr1[11] = "Hello";
	char cstr2[6] = "World";
	char cstr3[11];

	strcat_s(cstr1, cstr2);
	strcpy_s(cstr3, 11, cstr1);

	for (auto c : cstr3)
		cout << c;
	cout << endl;

	system("pause");
	return EXIT_SUCCESS;
}
