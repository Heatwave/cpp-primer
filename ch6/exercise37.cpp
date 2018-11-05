#include <string>

using std::string;

string(&func())[10];

using arr_string = string[10];

arr_string &func1();

auto func2()->string(&)[10];

string arr[] = { "H","e","l","l","o" };
decltype(arr) &func3();
