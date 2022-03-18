#ifndef MAIN_C
#define MAIN_C

#include <stdio.h>
#include <stddef.h>
#include <string.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
