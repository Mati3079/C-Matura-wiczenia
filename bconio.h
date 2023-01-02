// bconio - Implementacja wybranych stałych i funkcji Borland conio
// By KJ, 04.11.2017
// ----------------------------------------------------------------

#ifndef H_BCONIO
#define H_BCONIO

#include <conio.h>
#include <windows.h>

// Nazwy 16 kolorow Borland (zgodne z WinBGI / WinBGIm)
#ifndef __COLORS
#define __COLORS
enum colors {
	 BLACK, BLUE, GREEN, CYAN, RED, MAGENTA, BROWN, LIGHTGRAY, DARKGRAY,
	 LIGHTBLUE, LIGHTGREEN, LIGHTCYAN, LIGHTRED, LIGHTMAGENTA, YELLOW, WHITE
};
#endif  // __COLORS

// Implementacja wybranych funkcji konsolowych
void clrscr();
void clreol();
void delline();
void insline();
void gotoxy(int x, int y);
int wherex();
int wherey();
void textbackground(int color);
void textcolor(int color);

// Funkcja ukrywania / pokazywania kursora
void setcursor(bool visible);

#endif // H_BCONIO
