#include "main.h"
/**
 * *cap_string - function main
 * @p: pointer type char
 * Return: capitalized words in p
 */
char *cap_string(char *p)
{
	int i, j;
	char *sig = ",;.!?\"(){} \n\t";

	for (i = 0; *(p + i) != '\0'; i++)
	{
		if (*(p + i) >= 'a' && *(p + i) <= 'z')
			for (j = 0; *(sig + j) != '\0'; j++)
			{
				if (*(p + i - 1) == *(sig + j))
				{
					*(p + i) -= 32;
					break;
				}
				else if (i == 0)
				{
					*(p + i) -= 32;
					break;
				}
			}
	}
	return (p);
}
