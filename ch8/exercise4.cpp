#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "ch8.h"

void exercise4()
{
	std::vector<std::string> vecs;
	std::string temp_s;
	std::ifstream file("file.txt");
	while (std::getline(file, temp_s))
	{
		vecs.push_back(temp_s);
	}

	for (const auto &s : vecs)
		std::cout << s << std::endl;
}
