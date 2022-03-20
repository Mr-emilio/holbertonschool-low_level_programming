#include "variadic_functions.h"
/**
 * sum_them_all - add all the parameters
 * @n: parameters
 * Return: sum result
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int c;
	int sum = 0;
	va_list i;

	if (n == 0)
	{
		return (0);
	}
	va_start(i, n);
	for (c = 0; c < n; c++)
		sum += va_arg(i, int);

	va_end(i);
	return (sum);
}
