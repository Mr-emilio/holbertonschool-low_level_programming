#include "main.h"
/**
 * print_rev - function main, print str in reverse
 * @s: the str
 */
void print_rev(char *s)
{
int i = 0, j;

while (*s != '\0')
{
	i++;
	s++;
}
s--;
for (j = i; j > 0; j--)
{
	_putchar(*s);
	s--;
}
_putchar('\n');
}
