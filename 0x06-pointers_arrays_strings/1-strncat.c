#include "main.h"
/**
 * *_strncat - function main
 * @dest: pointer type char
 * @src: pointer type char
 * @n: variable type int
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	p = 0;
	while (dest[i] != '\0')
	{
		p++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[i];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
