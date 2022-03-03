#include "main.h"
/**
 * factorial - function main
 * @n: variable type int
 * Return: n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0 || n == 1)
		return (1);

	return (n * factorial(n - 1));
}
