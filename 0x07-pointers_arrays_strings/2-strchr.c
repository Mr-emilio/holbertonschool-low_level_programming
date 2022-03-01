#include "main.h"
/**
 * *_strchr - function main
 * @s: pointer type char
 * @c: variable type c
 * Return: s or NULL
 */
char *_strchr(char *s, char c)
{
while (*s != 00)
{
	if (*s == c)
		return (s);
	else if (*(s + 1) == c)
		return (s + 1);
	s++;
}
return (s + 1);
}
