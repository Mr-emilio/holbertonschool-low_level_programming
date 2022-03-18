#include "function_pointers.h"
/**
 * array_iterator - function main
 * @array: array pointer to be processed
 * @size: size of the array
 * @action: function to used
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		void (*p)(int);

		a = action;

		for (i = 0; i < size; i++)
		{
			a(array[i]);
		}
	}
}
