#ifndef LIST_H
#define LIST_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct s_list {
    void *data;
    struct s_list *next;
}              t_list;

t_list  *mx_create_node(void *data);

void mx_list_size(t_list *list);

#endif

