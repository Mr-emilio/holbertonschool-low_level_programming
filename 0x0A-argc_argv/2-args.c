#include <stdio.h>
/**
 * main - function main
 * @argc: num of strings
 * @argv: contains the strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
