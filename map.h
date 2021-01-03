#pragma once
#include "window.h"

class Map
{
private:
	std::vector<std::string> SCREEN_MAP;
	COORD MapCoord;
public:
	void SetMap();
};