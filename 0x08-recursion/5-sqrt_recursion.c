#include "main.h"
/**
 * _sqrt_recursion - function main
 * @n: variable type int
 * Return: n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (2sqrt(n, 0));
}
/**
 * sqrt - function for sqrt of number
 * @n: variable type int
 * @i: variable type int
 * Return: variable i
 */
int 2sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (2sqrt(n, i + 1));
}
