#include <iostream>
using std::cout;
using std::endl;

int main37()
{
	const char ca[] = { 'h', 'e', 'l', 'l', 'o' };
	const char *cp = ca;
	while (*cp)
	{
		cout << *cp << endl;
		++cp;
	}

	system("pause");
	return EXIT_SUCCESS;
}
