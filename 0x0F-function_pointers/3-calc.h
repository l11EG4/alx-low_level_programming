#ifndef CALC_H
#define CALC_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct op - A struct op.
 * @op: The operator.
 * @f: The associated function.
 * by kilimini
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif