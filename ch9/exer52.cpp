#include <iostream>
#include <stack>
#include <string>
#include "ch9.h"

using std::string;
using std::stack;
using std::endl;
using std::cout;

void exer52()
{
	string expr{ "1 + (2 + 3)" };
	string result = "";

	stack<char> string_stack;

	int left_parenthesis_count = 0;

	for (auto &s : expr)
	{
		if (s == '(' || left_parenthesis_count > 0)
		{
			string_stack.push(s);
			++left_parenthesis_count;
		}
		if (s == ')' && left_parenthesis_count > 0)
		{
			string_stack.pop();
			auto size = string_stack.size();
			while (size-- > 0)
			{
				if (string_stack.top() == '(')
				{
					string_stack.pop();
					break;
				}
				char c = string_stack.top();
				result += c;
				string_stack.pop();
			}
		}
	}
	string temp = "";
	auto size = result.size();
	while (size-- > 0)
	{
		temp += result[size];
	}

	result = temp;

	cout << result << endl;
}
