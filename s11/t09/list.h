#ifndef LIST_H
#define LIST_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct s_list {
    void *data;
    struct s_list *next;
}              t_list;

void mx_foreach_list(t_list *, void (*)(t_list*));

#endif

