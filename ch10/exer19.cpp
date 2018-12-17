#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "ch10.h"

using std::cout;
using std::endl;
using std::string;
using std::vector;

void biggies_stable_partition(vector<string> &words, vector<string>::size_type sz)
{
	elim_dups(words);

	std::stable_sort(words.begin(), words.end(),
		[](const string &a, const string &b) { return a.size() < b.size(); });

	auto wc = std::stable_partition(words.begin(), words.end(),
		[sz](const string &a) {return a.size() < sz; });

	auto count = words.end() - wc;
	cout << count << " " << make_plural(count, "word", "s")
		<< " of length " << sz << " or longer" << endl;
	std::for_each(wc, words.end(), [](const string&s) {cout << s << " "; });
	cout << endl;
}

void exer19()
{
	vector<string> words{ "Hello","this", "is", "a", "great", "cpp", "program" };
	biggies_stable_partition(words, 4);
}
