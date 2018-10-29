#include <iostream>

using std::cout;
using std::endl;

void exercise28()
{
	cout << "char: " << sizeof(char) << endl;
	cout << "wchar_t: " << sizeof(wchar_t) << endl;
	cout << "char16_t: " << sizeof(char16_t) << endl;
	cout << "char32_t: " << sizeof(char32_t) << endl;
	cout << endl;

	cout << "short: " << sizeof(short) << endl;
	cout << "int: " << sizeof(int) << endl;
	cout << "long: " << sizeof(long) << endl;
	cout << "long long: " << sizeof(long long) << endl;
	cout << "unsigned: " << sizeof(unsigned) << endl;
	cout << "unsigned long long: " << sizeof(unsigned long long) << endl;
	cout << endl;

	cout << "float: " << sizeof(float) << endl;
	cout << "double: " << sizeof(double) << endl;
	cout << "long double: " << sizeof(long double) << endl;
	cout << endl;

	cout << "bool: " << sizeof(bool) << endl;
	cout << "nullptr: " << sizeof(nullptr) << endl;
	cout << "size_t: " << sizeof(size_t) << endl;
	cout << sizeof(double) << endl;
	cout << sizeof(double) << endl;
}
