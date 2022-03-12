#include "main.h"
/**
 * array_range - function main, create an array
 * @min: inferior limit
 * @max: maximun limit
 * Return: array pointer
 */
int *array_range(int min, int max)
{
	int i, size;
	int *a;

	if (min > max)
	{
		return (NULL);
	}
	size = (max - min) + 1;
	a = malloc(sizeof(*a) * size);
	if (!a)
	{
		return (NULL);
	}
	for (i = 0; i < size && min <= max; i++, min++)
	{
		a[i] = min;
	}
	return (a);
}
