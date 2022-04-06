#include "main.h"
/**
 * binary_to_uint - converts binarys to unsigned int
 * @b: binary num
 * Return: converted number or 0 if fails
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int convertednumber = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		convertednumber = (convertednumber * 2) + (b[i] - '0');
	}
	return (convertednumber);
}
