#include "bconio.h"

void clrscr()
{
	COORD coord = {0, 0};
	DWORD written;
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(handle, &csbi);
	DWORD size = csbi.dwSize.X * csbi.dwSize.Y;
	FillConsoleOutputCharacter(handle, ' ', size, coord, &written);
	FillConsoleOutputAttribute(handle, csbi.wAttributes, size, coord, &written);
	SetConsoleCursorPosition(handle, coord);
}

void clreol()
{
    DWORD written;
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(handle, &csbi);
	COORD coord = csbi.dwCursorPosition;
	DWORD size = csbi.dwSize.X - coord.X;
	FillConsoleOutputCharacter(handle, ' ', size, coord, &written);
	FillConsoleOutputAttribute(handle, csbi.wAttributes, size, coord, &written);
	SetConsoleCursorPosition(handle, coord);
}

void delline()
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(handle, &csbi);
	COORD coord = csbi.dwCursorPosition;
	COORD orign = {0, coord.Y};
	SMALL_RECT rect = {0, (short)(coord.Y+1), (short)(csbi.dwSize.X-1), (short)(csbi.dwSize.Y-1)};
	SMALL_RECT clip = {0, coord.Y, rect.Right, rect.Bottom};
	CHAR_INFO fill = {' ', csbi.wAttributes};
	ScrollConsoleScreenBuffer(handle, &rect, &clip, orign, &fill);
	SetConsoleCursorPosition(handle, coord);
}

void insline()
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(handle, &csbi);
	COORD coord = csbi.dwCursorPosition;
	COORD orign = {0, (short)(coord.Y+1)};
	SMALL_RECT rect = {0, coord.Y, (short)(csbi.dwSize.X-1), (short)(csbi.dwSize.Y-1)};
	SMALL_RECT clip = {0, coord.Y, rect.Right, rect.Bottom};
	CHAR_INFO fill = {' ', csbi.wAttributes};
	ScrollConsoleScreenBuffer(handle, &rect, &clip, orign, &fill);
	SetConsoleCursorPosition(handle, coord);
}

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x-1;
	coord.Y = y-1;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int wherex()
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	if (!GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi))
		return -1;
	return csbi.dwCursorPosition.X+1;
}

int wherey()
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	if (!GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi))
		return -1;
	return csbi.dwCursorPosition.Y+1;
}

void textbackground(int color)
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	if (!GetConsoleScreenBufferInfo(handle, &csbi))
		return;
	WORD attr = (csbi.wAttributes & 15) + (color << 4);
	SetConsoleTextAttribute(handle, attr);
}

void textcolor(int color)
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	if (!GetConsoleScreenBufferInfo(handle, &csbi))
		return;
	WORD attr = color + (csbi.wAttributes & 240);
	SetConsoleTextAttribute(handle, attr);
}

void setcursor(bool visible)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    GetConsoleCursorInfo(handle, &info);
    info.bVisible = visible;
    SetConsoleCursorInfo(handle, &info);
}
