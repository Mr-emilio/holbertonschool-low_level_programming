#include "main.h"
/**
 * *_strspn - function main, length of a prefix substring
 * @s: pointer type char
 * @accept: pointer type char
 * Return: return number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0, j = 0, c = 0;

while (s[i] != 00)
{
	j;
	while (accept[j] != 00)
	{
		if (s[i] == accept[j])
		{
			c++;
			break;
		}
		j++;
	}
	if (accept[j] == 00)
		break;
	i++;
}
return (c);
}
