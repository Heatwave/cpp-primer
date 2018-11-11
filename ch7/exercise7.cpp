#include <iostream>
#include <cstdlib>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::endl;

int exercise7()
{
	Sales_data_struct total;
	double price = 0.0;

	if (read(cin, total))
	{
		Sales_data_struct trans;
		while (read(cin, trans))
		{
			if (total.isbn() == trans.isbn())
				total = add(total, trans);
			else
			{
				print(cout, total) << endl;
				total = trans;
			}
		}
		print(cout, total) << endl;
	}
	else
	{
		std::cerr << "No data?!" << endl;
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}
