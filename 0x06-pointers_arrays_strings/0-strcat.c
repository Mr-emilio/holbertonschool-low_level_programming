#include "main.h"
/**
 * *_strcat - function main, concatenates strings
 * @dest: type char pointer
 * @src: type char pointer
 * Return: return dest
 */
char *_strcat(char *dest, char *src)
{
int hello = 0, world = 0;

while (dest[hello] != '\0')
{
	hello++;
}

while ((dest[hello + world] = *src++) != '\0')
{
	world++;
}
return (dest);
}
