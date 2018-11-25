#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <fstream>
#include "ch8.h"

void exercise10()
{
	std::vector<std::string> vecs;
	std::string temp_s;
	std::ifstream file("file.txt");
	while (std::getline(file, temp_s))
	{
		vecs.push_back(temp_s);
	}

	std::string word;
	for (const auto &s : vecs)
	{
		std::istringstream ss(s);
		while (ss >> word)
		{
			std::cout << word << std::endl;
		}
	}
}
