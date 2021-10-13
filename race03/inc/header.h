#ifndef HEADER_H
#define	HEADER_H

#include <ncurses.h>
#include <unistd.h>
#include <stdlib.h>
#include <locale.h>

struct colms {
	wchar_t *arr;
	int length, start, finish;
};

wchar_t mx_rand_num();
void mx_size(WINDOW *mainwin,int *rows, int *cols);
int matrix(WINDOW *mainwin);
void mx_printmass(WINDOW *mainwin, int cols, int rows);
#endif

