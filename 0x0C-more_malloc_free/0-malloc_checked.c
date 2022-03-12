#include "main.h"
/**
 * *malloc_checked - function main
 * @b: variable type int
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (!a)
		exit(98);

	return (a);
}

