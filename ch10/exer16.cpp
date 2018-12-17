#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "ch10.h"

using std::cout;
using std::endl;
using std::string;
using std::vector;

string make_plural(size_t ctr, const string &word, const string &ending)
{
	return (ctr > 1) ? word + ending : word;
}

void elim_dups(vector<string> &words)
{
	sort(words.begin(), words.end());
	auto end_unique = std::unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
	elim_dups(words);

	std::stable_sort(words.begin(), words.end(),
		[](const string &a, const string &b) { return a.size() < b.size(); });

	auto wc = std::find_if(words.begin(), words.end(),
		[sz](const string &a) {return a.size() >= sz; });

	auto count = words.end() - wc;
	cout << count << " " << make_plural(count, "word", "s")
		<< " of length " << sz << " or longer" << endl;
	std::for_each(wc, words.end(), [](const string&s) {cout << s << " "; });
	cout << endl;
}

void exer16()
{
	vector<string> words{ "Hello","this", "is", "a", "great", "cpp", "program" };
	biggies(words, 4);
}
