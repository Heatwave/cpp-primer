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
	Sales_data() = default;
	Sales_data(const std::string &s) : bookNo(s) {}
	Sales_data(const std::string &s, unsigned n, double p) :
		bookNo(s), units_sold(n), revenue(p*n) {}
	Sales_data(std::istream &is)
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

Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);


#endif // Sales_data_CLASS_H
