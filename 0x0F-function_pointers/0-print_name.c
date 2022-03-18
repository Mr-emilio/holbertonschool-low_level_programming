#include "function_pointers.h"
/**
 * print_name - function main print a name
 * @name: str pointer type char
 * @f: funtion
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
