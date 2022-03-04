#include "main.h"
/**
 * wildcmp - function main compare strings
 * @str1: variable str type char
 * @str2: variable str type char
 * Return: 1 if strings are equal or 0 otherwise
 */
int wildcmp(char *str1, char *str2)
{
	if (*str1 == 0 && *str2 == 0)
		return (1);

	else if (*str1 == *str2)
		return (wildcmp(str1 + 1, str2 + 1));

	else if (*str1 == 0 && *(str2 + 1) != 0 && *str2 == '*')
		return (0);

	else if (*str2 == '*')
		return (wildcmp(str1, str2 + 1) || wildcmp(str1 + 1, str2));

	return (0);
}
