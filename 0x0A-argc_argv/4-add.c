#include <stdio.h>
#include <stdlab.h>
/**
 * main - function main add positive num
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n, i, add = 0;

	for (n = 1; n < argc; n++)
	{
		for (i = 0; argv[n][i]; i++)
		{
			if (argv[n][i] < '0' || argv[n][i] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[n]);
	}
	printf("%d\n", add);
	return (0);
}
