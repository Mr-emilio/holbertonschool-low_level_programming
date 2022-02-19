#include "main.h"
/**
 * print_triangle - print triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
int i, t;
if (size > 0)
{
	for (t = 1; t <= size; t++)
	{
		for (i = size - t; i > 0; i--)
			_putchar(' ');
		for (i = 0; i < t; i++)
			_putchar('#');

		if (t == size)
			continue;
		_putchar('\n');
	}
}
