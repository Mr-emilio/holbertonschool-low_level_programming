#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there -Mr 4602*/
/**
 * main - principal funtion of code
 * Return: return 0
 */
int main(void)
{
int n, div10;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
div10 = n % 10;
if (div10 > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, div10);
if (div10 == 0)
	printf("Last digit of %d is %d and is 0\n", n, div10);
if (div10 < 6 && != 0)
	printf("Last digit of %d is %d and is less than 6 and not 0", n, div10);
return (0);
}
