#include "function_pinters.h"
/**
 * array_iterator - function main
 * @array: array pointer to be processed
 * @size: size of the array
 * @action: function to used
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && action)
	{
		for (; i < size; i++)
		{
			action(array[i]);
		}
	}
}
