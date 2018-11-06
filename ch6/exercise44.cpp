#include <iostream>
#include <string>
#include <ctime>
#include "ch6.h"

bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

void exercise44()
{
	std::cout << isShorterInline("H", "Hello") << std::endl;


	auto start = clock();
	for (size_t i = 0; i < 1000000; i++)
	{
		isShorterInline("H", "Hello");
	}
	decltype(start) end = clock();

	std::cout << "inline function time cost: " << ((double(end - start)) / CLOCKS_PER_SEC) << std::endl;


	start = clock();
	for (size_t i = 0; i < 1000000; i++)
	{
		isShorter("H", "Hello");
	}
	end = clock();

	std::cout << "normal function time cost: " << ((double(end - start)) / CLOCKS_PER_SEC) << std::endl;
}
