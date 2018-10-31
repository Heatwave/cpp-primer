#include <iostream>
#include <string>
#include <vector>

void exercise5()
{
	std::vector<std::string> scores = { "F", "D", "C", "B", "A", "A++" };
	for (int g; std::cin >> g;)
	{
		std::string letter;

		if (g < 60)
			letter = scores[0];
		else
			letter = scores[(g - 50) / 10];
		std::cout << letter << std::endl;
	}
}
