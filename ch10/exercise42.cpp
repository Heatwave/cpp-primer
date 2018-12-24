#include <iostream>
#include <algorithm>
#include <list>
#include <string>
#include "ch10.h"

using std::cout;
using std::endl;
using std::list;
using std::string;
using std::sort;
using std::unique;

void print_slist(list<string> &slist)
{
	for (const auto &s : slist)
		cout << s << " ";
	cout << endl;
}

void elimDupsList (list<string> &words)
{
	print_slist(words);
	words.sort();
	print_slist(words);
	words.unique();
	print_slist(words);
}

void exer42()
{
	list<string> slist{ "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };
	elimDupsList(slist);
}
