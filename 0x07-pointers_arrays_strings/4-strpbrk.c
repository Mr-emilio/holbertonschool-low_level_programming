#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer type char
 * @accept: pointer type char
 * Return: NULL or the number of bytes
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;

for (a = 0; *(s + i) != 00; i++)
{
	for (j = 0; *(accept + j) != 00; j++)
	{
		if (*(s + i) == *(accept + j))
			return (s + i);
	}
}
return (00);
}
