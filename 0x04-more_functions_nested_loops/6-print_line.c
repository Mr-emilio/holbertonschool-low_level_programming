#include "main.h"

/**
 * print_line - my funtion that print a line
 * @n: is the number of times the _ should be printed
 */
void print_line(int n)
{
	while (n > 0)
	{
	_putchar('_');
	n--;
	}
	putchar('\n');
}
