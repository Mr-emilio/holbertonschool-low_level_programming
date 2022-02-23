#include "main.h"
/**
 * _strlen - function main
 * @s: variable type char
 * Return: return ln
 */
int _strlen(char *s)
{
int ln = 0;

while (*s != '\0')
{
	ln++;
	s++;
}
return (ln);
}
