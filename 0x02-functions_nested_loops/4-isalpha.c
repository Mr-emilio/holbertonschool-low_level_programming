#include "main.h"
/**
 * _isalpha - check c
 * @c: is the indice
 * Return: return 1 if c is letter, lowercase or uppercase, else 0
 */
int _isalpha(int c)
{
if (c >= 'a' && c < 'z')
	return (1);
else if (c >= 'A' && c < 'Z')
	return (1);
else
	return (0);
}
