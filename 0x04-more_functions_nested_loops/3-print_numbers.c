#include "main.h"
/**
 * print_numbers - my funtions print the numbers 0 through 9
 */
void print_numbers(void)
{
	int n;
	for (n = '0'; n <= '9'; n ++)
	{
		_putchar(n);
		_putchar('\n');
	}
}
