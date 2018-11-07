#include <iostream>
#include <cstdlib>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::endl;

int exercise1()
{
	Sales_data total;
	double price = 0.0;

	if (cin >> total.bookNo >> total.units_sold >> price)
	{
		total.revenue = total.units_sold * price;
		Sales_data trans;
		while (cin >> trans.bookNo >> trans.units_sold >> price)
		{
			trans.revenue = trans.units_sold * price;
			if (total.bookNo == trans.bookNo)
			{
				total.units_sold += trans.units_sold;
				total.revenue += trans.revenue;
			}
			else
			{
				cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
				total = trans;
			}
		}
		cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
	}
	else
	{
		std::cerr << "No data?!" << endl;
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}
