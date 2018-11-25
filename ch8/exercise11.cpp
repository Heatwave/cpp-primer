#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include "ch8.h"

using std::string;
using std::vector;

struct PersonInfo
{
	string name;
	vector<string> phones;
};

void exercise11()
{
	string line, word;
	vector<PersonInfo> people;
	std::istringstream record;

	while (std::getline(std::cin, line))
	{
		PersonInfo info;
		record.clear();
		record.str(line);
		record >> info.name;
		while (record >> word)
		{
			info.phones.push_back(word);
		}
		people.push_back(info);
		std::cout << "rdstate: " << record.rdstate() << std::endl;
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
