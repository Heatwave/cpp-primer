#include "Person.h"

std::istream &read(std::istream &is, Person &per)
{
	return is >> per.name >> per.address;
}

std::ostream &print(std::ostream &os, const Person &per)
{
	return os << per.getName() << " " << per.getAddress();
}
