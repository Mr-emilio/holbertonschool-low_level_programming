#include "main.h"
#include <stdio.h>
/**
 * print_array - function main
 * @a: pointer type int
 * @n: variable type int
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
	printf("%d", a[i]);
	if (i != n -1)
	{
		printf(", ");
	}
}
printf("\n");
}
