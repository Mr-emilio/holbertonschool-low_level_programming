#include <stdio.h>
/* read about putchar and loop for -mr 4602*/
/**
 * main - print the alphabet with the conditions
 * Return: return 0 fro conditions
 */
int main(void)
{
char alphabet;
for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	putchar(alphabet);
putchar('\n');
return (0);
}
