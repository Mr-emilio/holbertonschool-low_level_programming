#include "main.h"
/**
 * puts_half - function main
 * @str: pointer type char
 */
void puts_half(char *str)
{
int i, j, c = 0;

for (i = 0; str[i] != '\0'; i++)
	c++;

j = (c / 2);
if ((c % 2) == 1)
	j = ((c + 1) / 2);

for (i = j; str[i] != '\0'; i++)
{
	_putchar(str[i]);
	_putchar('\n');
}
}
