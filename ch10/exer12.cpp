#include <iostream>
#include <algorithm>
#include <vector>
#include "ch10.h"
#include "Sales_data_class.h"

using std::cout;
using std::endl;
using std::sort;
using std::vector;

bool compare_isbn(const Sales_data &s1, const Sales_data &s2)
{
	return s1.isbn() < s2.isbn();
}

void exer12()
{
	Sales_data s1("cas");
	Sales_data s2("asd");
	Sales_data s3("bfa");

	vector<Sales_data> svec{ s1, s2, s3 };
	for (const auto &s : svec)
	{
		print(cout, s);
		cout << endl;
	}

	cout << "after sort: " << endl;

	sort(svec.begin(), svec.end(), compare_isbn);
	for (const auto &s : svec)
	{
		print(cout, s);
		cout << endl;
	}
}
