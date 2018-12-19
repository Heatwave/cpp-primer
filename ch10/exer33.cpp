#include <iostream>
#include <fstream>
#include <iterator>
#include "ch10.h"

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::istream_iterator;
using std::ostream_iterator;

void exer33()
{
	ifstream in("numbers.txt");
	ofstream out0("odd.txt"), out1("even.txt");

	istream_iterator<int> numbers_in(in), eof;
	ostream_iterator<int> odd_out(out0, " ");
	ostream_iterator<int> even_out(out1, " ");

	while (numbers_in != eof)
	{
		if (*numbers_in % 2 == 0)
			*even_out++ = *numbers_in++;
		else
			*odd_out++ = *numbers_in++;
	}
}
