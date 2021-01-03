#include "window.h"

void Window::Wind()
{
	hWnd = GetConsoleWindow();

	SetWindowPos(hWnd, nullptr, 0, 0, 800, 600, NULL);
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &INF);
	INF.dwSize.Y = INF.dwMaximumWindowSize.Y;
	SetConsoleScreenBufferSize(GetStdHandle(STD_OUTPUT_HANDLE), INF.dwSize);
}

COORD Window::GetBufferInfo()
{
	return INF.dwSize;
}