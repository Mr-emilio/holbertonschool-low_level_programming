#include "main.h"
/**
 * *_memset - function main that fills memory with byte
 * @s: pointer type char
 * @b: variable type char
 * @n: variable type int, that is the numbers of bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
	s[i] = b;
	i++;
}
return (s);
}
