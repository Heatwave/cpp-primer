#include <iostream>
#include "ch9.h"
#include "MyDate.h"

using std::cout;
using std::endl;

void exer51()
{
	MyDate myDate;
	myDate.print();

	MyDate date0("1/10/1900");
	date0.print();

	MyDate date1("Dec 4 1990");
	date1.print();

	MyDate date2("January 15, 2018");
	date2.print();
}
