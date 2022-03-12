#include "main.h"
/**
 * *string_nconcat - function main
 * @s1: str pointer type char
 * @s2: str pointer type char
 * @n: bytes of s2
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	char *a;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}
	a = malloc(sizeof(char) * strlen(s1) + n + 1);
	if (!a)
	{
		return (NULL);
	}
	for (; i < (strlen(s1) + n); i++)
	{
		if (i < strlen(s1))
		{
			a[i] = s1[i];
		}
		else
		{
			a[i] = s2[j++];
		}
	}
	a[i] = '\0';
	return (a);
}
