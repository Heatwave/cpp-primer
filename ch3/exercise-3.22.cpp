#include <vector>
#include <string>
#include <iostream>
#include <cctype>
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::toupper;

int main22()
{
	vector<string> text{ "Hello", "World", "!!!", "", "Hi" };

	for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
	{
		for (auto is = it->begin(); is != it->end(); ++is)
			*is = toupper(*is);
		cout << *it << endl;
	}


	system("pause");
	return EXIT_SUCCESS;
}
