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
using std::stable_sort;
using std::unique;

bool is_shorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

void print_svec_v1(vector<string> &svec)
{
	for (const auto &s : svec)
		cout << s << " ";
	cout << endl;
}

void elimDupsV1(vector<string> &words)
{
	print_svec_v1(words);
	sort(words.begin(), words.end());
	print_svec_v1(words);
	auto end_unique = unique(words.begin(), words.end());
	print_svec_v1(words);
	words.erase(end_unique, words.end());
	print_svec_v1(words);
}

void exer11()
{
	vector<string> svec{ "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };
	elimDupsV1(svec);
	stable_sort(svec.begin(), svec.end(), is_shorter);
	print_svec_v1(svec);
}
