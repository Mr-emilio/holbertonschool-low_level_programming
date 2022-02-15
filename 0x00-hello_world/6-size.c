#include <stdio.h>
/*
 * if dont read the documentation dont copy maby wron
 */
/**
 * main - print the sentences with the size of various types
 * Return: return 0 by requirements
 */
int main(void)
{
printf("size of a char: %zu byte(s)\n", sizeof(char));
printf("size of a int: %zu byte(s)\n", sizeof(int));
printf("size of a long int: %zu byte(s)\n", sizeof(long int));
printf("size of a long long int: %zu byte(s)\n", sizeof(long long int));
printf("size of a float: %zu byte(s)\n", sizeof(float));
}
