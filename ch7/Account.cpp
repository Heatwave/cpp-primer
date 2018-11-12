#include "Account.h"

void Account::rate(double newRate)
{
	interestRate = newRate;
}

double Account::initRate()
{
	return 0.0;
}

double Account::interestRate = initRate();
constexpr int Account::period;
