#include "main.h"
/**
 * more_numbers - my main funtion print 1 through 14, 10 times
 */
void more_numbers(void)
{
	int veces;
	char nu;
	for (veces = 0; veces < 10; veces++)
	{
	for (nu = 0; nu <= 14; nu++)
	{
		if (p > 9)
		_putchar((p / 10) + '0');
		_putchar((p % 10) + '0');
	}
	_putchar('\n');
	}
}

