#include "../inc/header.h"

void mx_size(WINDOW *mainwin,int *rows, int *cols) {
    getmaxyx(mainwin, *rows, *cols);
}

