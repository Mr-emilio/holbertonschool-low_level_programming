#include "main.h"
/**
 * _islower - look if the c is lowercase
 * @c: is the indice
 * Return: return 1 or 0 for the condition
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);
}
