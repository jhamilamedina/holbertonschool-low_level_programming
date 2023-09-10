#ifndef _3_CAL_H_
#define _3_CAL_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>


/**
 * struct op_t - Struct op_t
 * @op: the operator
 * @f:the function associated
 */

typedef struct op_t
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
