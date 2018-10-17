#include <iostream>
#include "Sales_item.h"

int main20()
{
	Sales_item book;
	while (std::cin >> book)
		std::cout << book << std::endl;
	std::cout << std::endl;

	system("pause");
	return 0;
}
