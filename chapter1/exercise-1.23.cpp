#include <iostream>
#include "Sales_item.h"

int main23()
{
	Sales_item book, temp;
	int count = 1;
	std::cin >> book;
	while (std::cin >> temp) {
		if (book.isbn() != temp.isbn()) {
			std::cout << book << " sales count: " << count << std::endl;
			book = temp;
			count = 1;
		}
		else
			count++;
	}
	std::cout << book.isbn() << " sales count: " << count << std::endl;

	system("pause");
	return 0;
}
