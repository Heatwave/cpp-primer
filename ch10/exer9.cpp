#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include "ch10.h"

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::sort;
using std::unique;

void print_svec(vector<string> &svec)
{
	for (const auto &s : svec)
		cout << s << " ";
	cout << endl;
}

void elimDups(vector<string> &words)
{
	print_svec(words);
	sort(words.begin(), words.end());
	print_svec(words);
	auto end_unique = unique(words.begin(), words.end());
	print_svec(words);
	words.erase(end_unique, words.end());
	print_svec(words);
}

void exer9()
{
	vector<string> svec{ "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };
	elimDups(svec);
}
