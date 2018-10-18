#include <iostream>

std::string global_str;
int global_int;

int maininit()
{
	int local_int;
	std::string local_str;

	std::cout << global_int << std::endl;
	//std::cout << local_int << std::endl;

	system("pause");
	return 0;
}
