#include <iostream>
#include <vector>
#include "ch9.h"

using std::vector;

void exercise24()
{
	vector<int> ivec{ 1 };
	std::cout << ivec.at(0) << std::endl;
	std::cout << ivec[0] << std::endl;
	std::cout << ivec.front() << std::endl;
	std::cout << *ivec.begin() << std::endl;
}
