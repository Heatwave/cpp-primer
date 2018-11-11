#pragma once
#ifndef SCREEN_H
#define SCREEN_H

#include <string>
#include "Window_mgr.h"

class Screen
{
	friend void Window_mgr::clear(ScreenIndex);

public:
	typedef std::string::size_type pos;

	Screen() = default;
	Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht*wd, ' ') {}
	Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht*wd, c) {}

	char get() const { return contents[cursor]; }
	char get(pos ht, pos wd) const;

	Screen &set(char);
	Screen &set(pos, pos, char);

	Screen &move(pos r, pos c);

	Screen &display(std::ostream &os) { do_display(os); return *this; }
	const Screen &display(std::ostream &os) const { do_display(os); return *this; }

	pos size() const;

private:
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;
	mutable size_t access_ctr;

	void do_display(std::ostream &os) const { os << contents; }
};

inline char Screen::get(pos r, pos c) const
{
	pos row = r * width;
	return contents[row + c];
}

inline Screen &Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}
inline Screen &Screen::set(pos r, pos col, char ch)
{
	contents[r*width + col] = ch;
	return *this;
}

inline Screen &Screen::move(pos r, pos c)
{
	pos row = r * width;
	cursor = row + c;
	return *this;
}

inline Screen::pos Screen::size() const
{
	return height * width;
}

#endif // !SCREEN_H
