#pragma once
#ifndef CH6_H
#define CH6_H

#include <string>

using std::string;

int fact(int val);
void exercise4();
void exercise5();
void exercise6();
void exercise7();
void exercise10();
void exercise11();
void exercise12();
void exercise17();
void exercise21();
void exercise22();
void exercise23();
void exercise25(int argc, char **argv);
void exercise27();
void exercise30();
void exercise32();
void exercise33();
void exercise34();
void exercise42();

inline bool isShorterInline(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

void exercise44();
void exercise47();
void exercise51();

int func(int, int);
void exercise54();

int plusFunc(int, int);
int minusFunc(int, int);
int multiFunc(int, int);
int divideFunc(int, int);
void exercise55();
void exercise56();

#endif // !CH6_H
