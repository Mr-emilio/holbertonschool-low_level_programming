#include "main.h"
/**
 * is_prime_number - function main
 * @n: variable type int
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (check_prime(n, n - 1));
}
/**
 * check_prime - check if is prime
 * @i: variable type int
 * @n: variable type int
 * Return: 1 or 0
 */
int check_prime(int n, int i)
{
	if (i == 1)
		return (1);

	if (n % i == 0 && i > 0)
		return (0);

	return (check_prime(n, i - 1));
}
