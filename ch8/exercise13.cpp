#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <fstream>

#include "ch8.h"

using std::string;
using std::vector;

struct PersonInfo
{
	string name;
	vector<string> phones;
};

void exercise13()
{
	string line, word;
	vector<PersonInfo> people;

	std::ifstream f("person_info.txt");

	while (std::getline(f, line))
	{
		PersonInfo info;
		std::istringstream record(line);
		record >> info.name;
		while (record >> word)
		{
			info.phones.push_back(word);
		}
		people.push_back(info);
	}

	for (const auto p : people)
	{
		std::cout << p.name << " ";
		for (const auto &s : p.phones)
		{
			std::cout << s << " ";
		}
		std::cout << std::endl;
	}
}
