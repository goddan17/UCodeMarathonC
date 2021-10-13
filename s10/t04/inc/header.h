#ifndef HEADER_H
#define HEADER_H

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int mx_count_characters(const char* s);
int mx_count_lines(const char *str);
int mx_count_words(const char *str);
int mx_file_len(const char *file);
bool mx_isspace(char c);
void mx_printchar(char s);
void mx_printint(int n);
void mx_printstr(const char *s);
int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(const char *s);
char *mx_strnew(const int size);

#endif

