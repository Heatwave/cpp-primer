#pragma once
#ifndef PERSON_H
#define PERSON_H

#include <string>

using std::string;

struct Person
{
	string name;
	string address;

	Person() = default;
	Person(const string &n, const string &a) : name(n), address(a) {}
	Person(std::istream &is)
	{
		is >> name >> address;
	}

	string getName() const { return name; };
	string getAddress() const { return address; };
};

std::istream &read(std::istream&, Person&);
std::ostream &print(std::ostream&, const Person&);

#endif // !PERSON_H
