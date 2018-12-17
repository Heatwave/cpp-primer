#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "ch10.h"

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::partition;

bool has_chars_more_then_five(string &s)
{
	return s.size() >= 5;
}

void exer13()
{
	vector<string> words{ "Hello","this", "is", "a", "great", "cpp", "program" };
	auto end_partition = partition(words.begin(), words.end(), has_chars_more_then_five);
	auto words_iter = words.cbegin();
	while (words_iter != end_partition)
	{
		cout << *words_iter << " ";
		++words_iter;
	}
}
