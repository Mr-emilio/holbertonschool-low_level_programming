#include "main.h"
/**
 * flip_bits - Return the numbers you would need to flip to get from n to m
 * @n: number
 * @m: number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned int count = 0;
	unsigned long int bts = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		if ((bts >> i) & 1)
			count++;
	}
	return (count);
}
