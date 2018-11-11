#pragma once
#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
#include <iostream>

struct Sales_data_struct;
std::istream &read(std::istream&, Sales_data_struct&);

struct Sales_data_struct
{
	Sales_data_struct() = default;
	Sales_data_struct(const std::string &s) : bookNo(s) {}
	Sales_data_struct(const std::string &s, unsigned n, double p) :
		bookNo(s), units_sold(n), revenue(p*n) {}
	Sales_data_struct(std::istream &is)
	{
		read(is, *this);
	}
	//Sales_data_struct() : bookNo(""), units_sold(0), revenue(0) {}

	std::string isbn() const { return bookNo; };
	Sales_data_struct& combine(const Sales_data_struct&);
	double avg_price() const;

	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

Sales_data_struct add(const Sales_data_struct&, const Sales_data_struct&);
std::ostream &print(std::ostream&, const Sales_data_struct&);

#endif // SALES_DATA_H
