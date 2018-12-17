#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include "ch10.h"

using std::cout;
using std::endl;
using std::string;
using std::vector;

using namespace std::placeholders;

bool check_size(const string &s, string::size_type sz)
{
	return s.size() < sz;
}

void biggies_bind(vector<string> &words, vector<string>::size_type sz)
{
	elim_dups(words);

	std::stable_sort(words.begin(), words.end(),
		[](const string &a, const string &b) { return a.size() < b.size(); });

	auto wc = std::stable_partition(words.begin(), words.end(),
		std::bind(check_size, _1, sz));

	auto count = words.end() - wc;
	cout << count << " " << make_plural(count, "word", "s")
		<< " of length " << sz << " or longer" << endl;
	std::for_each(wc, words.end(), [](const string&s) {cout << s << " "; });
	cout << endl;
}

void exer25()
{
	vector<string> words{ "Hello","this", "is", "a", "great", "cpp", "program" };
	biggies_bind(words, 4);
}
