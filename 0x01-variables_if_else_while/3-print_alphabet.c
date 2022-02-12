#include <stdio.h>
/*rear the documentation -Mr 4602*/
/**
 * main - print the uppercase alphabet
 * Return: return 0 for conditions
 */
int main(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	putchar(alphabet);
for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	putchar(alphabet);
putchar('\n');
return (0);
}
