#include <stdio.h>
/* read the documentation about loop for and putchar -Mr 4602*/
/**
 * main - print the numbers and the letters
 * Return: return 0 for conditions
 */
int main(void)
{
int n;
char letter;
for (n = '0'; n <= '9'; n++)
	putchar(n);
for (letter = 'a'; letter <= 'f'; letter++)
	putchar(letter);
putchar('\n');
return (0);
}
