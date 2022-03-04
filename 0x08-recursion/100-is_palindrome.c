#include "main.h"
#include <string.h>
/**
 * is_palindrome - function main
 * @s: variable type char
 * Return: 1 if is palindrome or 0 otherwise
 */
int is_palindrome(char *s)
{
	int lon = strlen(s);

	if (lon == 0)
		return (1);

	return (compare_chars(s, 0, lon - 1));
}
/**
 * check_igual_char - check if the char are igual
 * @s: variable str type char
 * @i: variable type char
 * @j: variable type char
 * Return: 1 equal or 0 otherwise
 */
int check_igual_char(char *s, int i, int j)
{
	if (i == j)
		return (1);

	else if (s[i] != s[j])
		return (0);

	else if (i < j + 1)
		return (check_igual_char(s, i + 1, j - 1));

	return (1);
}
