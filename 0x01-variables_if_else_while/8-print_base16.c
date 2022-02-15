#include <stdio.h>
/* read the documentation about loop for and putchar -Mr 4602*/
/**
 * main - print the numbers and the letters
 * Return: return 0 for conditions
 */
int main(void)
{
int n;
int letter;
for (n = '0'; n <= '9'; n++)
	putchar(n);
for (letter = 0; letter <= 5; letter++)
	putchar((int)letter);
putchar('\n');
return (0);
}
