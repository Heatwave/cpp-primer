#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

void exercise20()
{
	vector<string> vec{ "Hello", "World", "!", "" };
	vector<string>::iterator iter = vec.begin();

	cout << *iter++ << endl;
	cout << *iter++ << endl;
	cout << (*iter).empty() << endl;
	cout << iter->empty() << endl;
	cout << *++iter << endl;
	cout << iter++->empty() << endl;
}
