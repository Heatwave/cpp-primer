#include <iostream>
#include <vector>
#include "ch9.h"

using std::vector;

void exercise15()
{
	vector<int> v1 = { 1,3,5,7,9,12 };
	vector<int> v2 = { 1,3,9 };
	vector<int> v3 = { 1,3,5,7 };
	vector<int> v4 = { 1,3,5,7,9,12 };

	std::cout << (v1 < v2) << std::endl;
	std::cout << (v1 < v3) << std::endl;
	std::cout << (v1 == v4) << std::endl;
	std::cout << (v1 == v2) << std::endl;
}
