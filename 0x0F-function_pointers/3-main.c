#include "3-calc.h"
/**
 * main - function main
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if succes
 */
int main(int argc, char *argv[])
{
	int a = 0;
	int b = 0;
	int (*func)(int, int);
	int res = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	res = func(a, b);
	printf("%d\n", res);

	return (0);
}
