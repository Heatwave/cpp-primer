#include <iostream>
#include <cstdlib>
#include "Sales_data.h"

int exercise11()
{
	Sales_data sales_data0;
	Sales_data sales_data1("ISBN");
	Sales_data sales_data2("ISBN", 2, 10);
	Sales_data sales_data3(std::cin);

	return EXIT_SUCCESS;
}
