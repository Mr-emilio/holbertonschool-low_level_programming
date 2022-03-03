#include "main.h"
/**
 * _print_rev_recursion - function main
 * @s: pointer type char
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
