#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "ch10.h"

using std::cout;
using std::endl;
using std::string;
using std::vector;

bool count_words_len(const string &s)
{
	return s.size() > 6;
}

void exer22()
{
	vector<string> words{ "Hello","this", "is", "a", "great", "cpp", "program" };
	auto count = std::count_if(words.cbegin(), words.cend(),
		count_words_len);
	cout << count << endl;
}
