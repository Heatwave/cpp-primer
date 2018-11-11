#include <iostream>
#include <cstdlib>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::endl;

int exercise13()
{
	Sales_data total(cin);
	if (!total.isbn().empty())
	{
		std::istream &is = std::cin;
		while (is)
		{
			Sales_data trans(is);
			if (!is)
				break;
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
