#include <iostream>
#include "Sales_item.h"

int main22()
{
	Sales_item book, total;
	while (std::cin >> book)
		total += book;
	std::cout << total << std::endl;

	system("pause");
	return 0;
}
