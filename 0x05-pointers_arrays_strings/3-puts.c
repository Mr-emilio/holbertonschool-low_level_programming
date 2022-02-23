#include "main.h"
/**
 * _puts - function main
 * @str: pointer type char
 */
void _puts(char *str)
{
while (*str != '\0')
{
	_putchar(*str++);
}
_putchar('\n');
}
