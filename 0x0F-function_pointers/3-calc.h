#ifndef _CALC_H
#define _CALC_H
/**
 * struct op - the structur be used
 * @op: operator
 * @: a function
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*prototypes to be used for the exercice */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
