#pragma once
#ifndef PERSON_H
#define PERSON_H

#include <string>

using std::string;

struct Person
{
	string name;
	string address;

	string getName() const { return name; };
	string getAddress() const { return address; };
};

#endif // !PERSON_H
