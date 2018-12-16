#include <iostream>
#include <algorithm>
#include <list>
#include <string>
#include "ch10.h"

using std::list;
using std::string;
using std::count;
using std::cout;
using std::endl;

void exer2()
{
	list<string> slist{ "Hello", "water", "world", "shit", "good", "bed", "good", "bad" };
	auto show_count = count(slist.cbegin(), slist.cend(), "shit");
	cout << show_count << endl;
}
