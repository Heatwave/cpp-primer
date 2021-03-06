#include "Sales_data.h"

double Sales_data_struct::avg_price() const
{
	if (units_sold)
		return revenue / units_sold;
	else
		return 0;
}

Sales_data_struct& Sales_data_struct::combine(const Sales_data_struct &rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

Sales_data_struct add(const Sales_data_struct &lhs, const Sales_data_struct &rhs)
{
	Sales_data_struct sum = lhs;
	sum.combine(rhs);
	return sum;
}

std::ostream &print(std::ostream &os, const Sales_data_struct &item)
{
	os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
	return os;
}

std::istream &read(std::istream &is, Sales_data_struct &item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}
