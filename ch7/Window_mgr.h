#pragma once
#ifndef CH7_WINDOW_MGR_H
#define CH7_WINDOW_MGR_H

#include <vector>
#include <string>
#include "Screen.h"

class Screen;

class Window_mgr
{
public:
	using ScreenIndex = std::vector<Screen>::size_type;
	void clear(ScreenIndex);
private:
	std::vector<Screen> screens;
};

#endif // !CH7_WINDOW_MGR_H
