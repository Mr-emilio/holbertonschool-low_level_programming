#include "main.h"

/**
 * swap_int - main funtion
 * @a: variable 1
 * @b: variable 2
 */
void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
