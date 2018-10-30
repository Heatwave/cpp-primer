#include <string>
using std::string;

void exercise37()
{
	int i;
	double d;
	string s = "Hello";
	const string *ps = &s;
	char c = 'a';
	char *pc = &c;
	void *pv;

	pv = static_cast<void*>(const_cast<string*>(ps));
	i = static_cast<int>(*pc);
	pv = static_cast<void*>(&d);
	pc = static_cast<char*>(pv);
}
