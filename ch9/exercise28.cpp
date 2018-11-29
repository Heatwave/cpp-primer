#include <iostream>
#include <forward_list>
#include <string>

using std::forward_list;
using std::string;

void insert_str(forward_list<string> &sflist, string str_find, string str_insert)
{
	auto curr = sflist.begin(), prev = sflist.before_begin();
	while (curr != sflist.end() && *curr != str_find)
	{
		++curr;
		++prev;
	}

	if (curr == sflist.end())
	{
		sflist.insert_after(prev, str_insert);
	}
	else
	{
		sflist.insert_after(curr, str_insert);
	}
}

void exercise28()
{
	forward_list<string> sflist{ "Hello" };
	insert_str(sflist, "Hello", " ");
	insert_str(sflist, " ", "World");
	insert_str(sflist, "Test", "!!!");

	for (const auto &s : sflist)
	{
		std::cout << s;
	}
	std::cout << std::endl;
}
