#include "main.h"
/**
 * puts2 - function main
 * @str: pointer type char
 */
void puts2(char *str)
{
int i = 0, j = 0, k;
char *p = str;

while (*p != '\0')
{
	p++;
	i++;
}
j = i - 1;
for (k = 0; k <= j; k++)
{
	if (k % 2 == 0)
		_putchar(str[k]);
}
_putchar('\n');
}
