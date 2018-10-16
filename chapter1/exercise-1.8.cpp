#include <iostream>

int main8()
{
	std::cout << "/*";
	std::cout << "*/";
	std::cout << /* "*/" */";
	std::cout << /* "*/" /* "/*" */;

	system("pause");
	return 0;
}
