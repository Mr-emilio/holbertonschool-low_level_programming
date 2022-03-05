#include <stdio.h>
#include <stdlib.h>
/**
 * main - function main
 * @argc: num of arguments
 * @argv: argument vector
 * Return: 0 or 1 if is error
 */
int main(int argc, char *argv[])
{
	int total;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		total = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	}
	return (0);
}
