#include "main.h"
/**
 * *_strcpy - function main
 * @dest: pointer type char 1
 * @src: pointer type char 2
 * Return: return dest pointer
 */
char *_strcpy(char *dest, char *src)
{
int i = 0, j;

while (src[i] != '\0')
	i++;

for (j = 0; j <= i; j++)
	dest[j] = src[j];
return (dest);
}
