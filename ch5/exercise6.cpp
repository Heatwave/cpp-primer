#include <iostream>
#include <string>
#include <vector>

void exercise6()
{
	std::vector<std::string> scores = { "F", "D", "C", "B", "A", "A++" };
	for (int g; std::cin >> g;)
	{
		std::string letter;

		letter = g < 60 ? scores[0] : scores[(g - 50) / 10];

		std::cout << letter << std::endl;
	}
}
