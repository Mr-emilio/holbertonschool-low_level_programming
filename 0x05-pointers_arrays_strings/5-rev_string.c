#include "main.h"
/**
 * rev_string - function main
 * @s: pointer type char
 */
void rev_string(char *s)
{
char str = s[0];
int i = 0, j;

while (s[i] != '\0')
	i++;
for (j = 0; j < i; j++)
{
	i--;
	str = s[j];
	s[j] = s[i];
	s[i] = str;
}
}

