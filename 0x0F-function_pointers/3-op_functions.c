#include "3-calc.h"
/**
 * op_add - sum operation
 * @a: variable type int
 * @b: variable type int
 * Return: sum result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substract operation
 * @a: variable type int
 * @b: variable type int
 * Return: substract result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication operation
 * @a: variable type int
 * @b: variable type int
 * Return: multiply result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division operation
 * @a: variable type int
 * @b: variable type int
 * Return: division result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - module operation
 * @a: variable type int
 * @b: variable type int
 * Return: the module
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
