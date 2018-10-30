#include <iostream>

void exercise33()
{
	int x = 1, y = 1;
	bool someValue = true;
	int result = (someValue ? ++x, ++y : --x, --y);
	std::cout << result << ' ' << x << ' ' << y << std::endl;
}
