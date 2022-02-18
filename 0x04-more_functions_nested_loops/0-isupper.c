#include "main.h"
#include <stdio.h>
/**
 * _isupper - the funtion checks for an uppercase letter
 * @c: my variable
 * Return: 0 by else
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
	return (1);
}
else
{
	return (0);
}
