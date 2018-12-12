#pragma once
#ifndef CH9_MYDATE_H
#define CH9_MYDATE_H

#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::stoi;
using std::vector;
using std::cout;
using std::endl;

class MyDate
{
public:
	MyDate();
	MyDate(string date);
	~MyDate();

	void print();

private:
	unsigned year = 0;
	unsigned month = 0;
	unsigned day = 0;

	const string numbers{ "0123456789" };
	const string alphabets{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
	const vector<string> fullMonth{ "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	const vector<string> mon{ "Jan", "Feb", "Mar", "Apr", "May", "June", "July", "Aug", "Sept", "Oct", "Nov", "Dec" };
};

MyDate::MyDate()
{
}

MyDate::MyDate(string date)
{
	auto firstOfSlash = date.find_first_of("/");

	if (date.substr(0, 1).find_first_of(numbers) != string::npos && firstOfSlash != string::npos)
	{
		auto lastOfSlash = date.find_last_of("/");

		month = stoi(date.substr(0, firstOfSlash));
		day = stoi(date.substr(firstOfSlash + 1, lastOfSlash - firstOfSlash));
		year = stoi(date.substr(lastOfSlash + 1));
	}
	else if (date.substr(0, 1).find_first_of(alphabets) != string::npos)
	{
		string monthName;
		auto firstOfComma = date.find_first_of(",");
		if (firstOfComma != string::npos)
		{
			monthName = date.substr(0, date.find_first_of(" "));
			for (auto s : fullMonth)
			{
				++month;
				if (s == monthName)
					break;
			}
			day = stoi(date.substr(date.find_first_of(" ") + 1, firstOfComma));
			year = stoi(date.substr(date.find_last_of(" ") + 1));
		}
		else
		{
			monthName = date.substr(0, date.find_first_of(" "));
			for (auto s : mon)
			{
				++month;
				if (s == monthName)
					break;
			}
			day = stoi(date.substr(date.find_first_of(" ") + 1, date.find_last_of(" ") - date.find_first_of(" ")));
			year = stoi(date.substr(date.find_last_of(" ") + 1));
		}
	}
}

MyDate::~MyDate()
{
}

void MyDate::print()
{
	cout << year << " year " << month << " month " << day << " day" << endl;
}

#endif // !CH9_MYDATE_H
