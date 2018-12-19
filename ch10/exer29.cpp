#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <fstream>
#include <algorithm>
#include "ch10.h"

using std::cout;
using std::endl;
using std::string;
using std::vector;

void exer29()
{
	vector<string> svec;
	std::ifstream in("words.txt");
	std::istream_iterator<string> file_in_iter(in), eof;

	//while (file_iter != eof)
	//{
	//	svec.push_back(*file_iter++);
	//}
	std::copy(file_in_iter, eof, std::back_inserter(svec));

	std::ostream_iterator<string> file_out_iter(cout, " ");

	//for (auto &s : svec)
	//	*file_out_iter++ = s;
	//cout << endl;

	std::copy(svec.cbegin(), svec.cend(), file_out_iter);
}
