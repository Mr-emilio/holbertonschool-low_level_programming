#include "main.h"
/**
 * reverse_array - function main
 * @a: pointer type int
 * @n: variable type int
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
