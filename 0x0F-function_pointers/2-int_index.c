#include "function_pointers.h"
/**
 * int_index - function main searches ints
 * @array: array pointer
 * @size: size of array
 * @cmp: pointer used to compare values
 * Return: -1 if no matches elements or index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}
	if (array && cmp)
	{
		for (; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
