#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "ch8.h"

void exercise5()
{
	std::vector<std::string> vecs;
	std::string temp_s;
	std::ifstream file("file.txt");
	while (file >> temp_s)
	{
		vecs.push_back(temp_s);
	}

	for (const auto &s : vecs)
		std::cout << s << std::endl;
}
