#pragma once
#ifndef Sales_data_CLASS_H
#define Sales_data_CLASS_H

#include <string>
#include <iostream>

class Sales_data
{
	friend Sales_data add(const Sales_data&, const Sales_data&);
	friend std::ostream &print(std::ostream&, const Sales_data&);
	friend std::istream &read(std::istream&, Sales_data&);

public:
	Sales_data(const std::string &s, unsigned n, double p) :
		bookNo(s), units_sold(n), revenue(p*n) {
	}
	Sales_data(const std::string &s) : Sales_data(s, 0, 0.0) {
	}
	Sales_data(std::istream &is = std::cin)
	{
		read(is, *this);
	}
	//Sales_data() : bookNo(""), units_sold(0), revenue(0) {}

	std::string isbn() const { return bookNo; };
	Sales_data& combine(const Sales_data&);

private:
	double avg_price() const;

	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

inline
double Sales_data::avg_price() const
{
	if (units_sold)
		return revenue / units_sold;
	else
		return 0;
}

Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);

#endif // Sales_data_CLASS_H
