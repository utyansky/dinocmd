#pragma once
#include <Windows.h>
#include <iostream>
#include <vector>
#include <string>
class Window
{
private:
	HWND hWnd;
	CONSOLE_SCREEN_BUFFER_INFO INF;

public:
	void Wind();
	COORD GetBufferInfo();
};