#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <numeric>
#include "ch10.h"
#include "Sales_item.h"

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::find_if;
using std::accumulate;
using std::istream_iterator;
using std::ostream_iterator;
using std::back_inserter;

void exer32()
{
	vector<Sales_item> sales_vec;
	istream_iterator<Sales_item> sales_in_iter(cin), eof;
	ostream_iterator<Sales_item> sales_out_iter(cout, "\n");

	copy(sales_in_iter, eof, back_inserter(sales_vec));
	sort(sales_vec.begin(), sales_vec.end(), [](const Sales_item &s1, const Sales_item &s2) { return s1.isbn() < s2.isbn(); });

	auto begin = sales_vec.cbegin(), end = begin;
	while (begin != sales_vec.cend())
	{
		end = find_if(begin, sales_vec.cend(), [begin](const Sales_item &s) {return s.isbn() != begin->isbn(); });
		cout << accumulate(begin, end, Sales_item(begin->isbn())) << endl;
		begin = end;
	}
}
