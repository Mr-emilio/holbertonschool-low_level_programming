#include <stdio.h>
/*read the documentation -mr 4602*/
/**
 * main - print without eq
 * Return: return 0 for conditions in project
 */
int main(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	if (alphabet != 'e' && alphabet != 'q')
		putchar(alphabet);
putchar('\n');
return (0);
}
