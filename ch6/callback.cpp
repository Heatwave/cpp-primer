#include <iostream>
#include <string>
#include "ch6.h"

typedef void Callback(string);

void printMessage(string msg)
{
	std::cout << msg << std::endl;
}

void func(string data, Callback cb)
{
	std::cout << "data: " << data << std::endl;
	cb("I am cb");
}

void cbexample()
{
	func("Hello", printMessage);
}
