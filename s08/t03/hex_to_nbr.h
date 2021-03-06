#ifndef HEX_TO_NBR_H
#define HEX_TO_NBR_H

#include <stdlib.h>

#include "stdbool.h"

unsigned long mx_hex_to_nbr(const char *hex);
bool mx_isalpha(int c);
bool mx_isdigit(int c);
bool mx_isupper(int c);
bool mx_islower(int c);

#endif

