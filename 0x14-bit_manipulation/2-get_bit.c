#include "main.h"
/**
 * get_bit - return the value of a bit at a given index
 * @n: number
 * @index: given index
 * Return: index or -1 if fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count = 0;

	while (count < 64)
	{
		if (count == index)
		{
			if ((n >> count) & 1)
				return (1);
			else
				return (0);
		}
		count++;
	}
	return (-1);
}
