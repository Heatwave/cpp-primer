#pragma once
#ifndef CH7_ACCOUNT_H
#define CH7_ACCOUNT_H

#include <string>

class Account
{
public:
	void calculate() { amount += amount * interestRate; }
	static double rate() { return interestRate; }
	static void rate(double);

private:
	std::string owner;
	double amount;
	static double interestRate;
	static double initRate();

	static constexpr int period = 30;
	double daily_tbl[period];
};

#endif // !CH7_ACCOUNT_H
