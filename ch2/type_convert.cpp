#include <iostream>

int maintype()
{
	bool b = 42;
	std::cout << "b: " << b << std::endl;
	int i = b;
	std::cout << "i: " << i << std::endl;
	i = 3.14;
	std::cout << "i: " << i << std::endl;
	double pi = i;
	std::cout << "pi: " << pi << std::endl;
	unsigned char c = -1;
	std::cout << "c: " << (int)c << std::endl;
	signed char c2 = 256;
	std::cout << "c2: " << (int)c2 << std::endl;

	unsigned u = 10;
	i = -42;
	std::cout << i + i << std::endl;
	std::cout << u + i << std::endl;

	unsigned u1 = 42, u2 = 10;
	std::cout << u1 - u2 << std::endl;
	std::cout << u2 - u1 << std::endl;

	system("pause");
	return 0;
}
