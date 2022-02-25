#include "main.h"
/**
 * *leet - function main
 * @s: pointer type char
 * Return: return s
 */
char *leet(char *s)
{
	int i, j;
	char origin[] = "aAeEoOtTlL";
	char change[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (origin[j] == *(s + i))
				*(s + i) = change[j];
		}
	}
	return (s);
}
