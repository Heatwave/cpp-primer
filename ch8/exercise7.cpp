#include <iostream>
#include <fstream>
#include "../ch7/Sales_data_class.h"

void exercise7(int argc, const char *argv[])
{
	std::ifstream f(argv[0]);
	std::ofstream o(argv[1]);
	Sales_data total("XXX");
	if (read(f, total))
	{
		Sales_data trans("XXX");
		while (read(f, trans))
		{
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else
			{
				print(o, total) << std::endl;
				total = trans;
			}
		}
		print(o, total) << std::endl;
	}
	else
	{
		std::cerr << "No data?!" << std::endl;
	}
}
