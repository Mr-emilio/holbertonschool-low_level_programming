#include "main.h"
/**
 * _memcpy - function main, copy memory
 * @dest: pointer type char
 * @src: pointer type char
 * @n: variable type int
 * Return: return dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
	dest[i] = src[i];
	i++;
}
return (dest);
}
