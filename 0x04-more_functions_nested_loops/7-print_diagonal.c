#include "main.h"
/**
 * print_diagonal - is the funtion main, print lines with space
 * @n: times the \ should be printed
 */
void print_diagonal(int n)
{
int l, s;
if (n <= 0)
	_putchar('\n');
for (l = 0; l < n; l++)
{
	for (s = 0; s <= l; s++)
	{
		if (l == s)
		{
			_putchar('\\');
			_putchar('\n');
		}
		else
			_putchar(' ');
	}
}
}
