#pragma once
#ifndef Person_class_H
#define Person_class_H

#include <string>

using std::string;

class Person_class
{
private:
	string name;
	string address;

public:
	Person_class() = default;
	Person_class(const string &n, const string &a) : name(n), address(a) {}
	Person_class(std::istream &is)
	{
		is >> name >> address;
	}

	string getName() const { return name; };
	string getAddress() const { return address; };
};

std::istream &read(std::istream&, Person_class&);
std::ostream &print(std::ostream&, const Person_class&);

#endif // !Person_class_H
