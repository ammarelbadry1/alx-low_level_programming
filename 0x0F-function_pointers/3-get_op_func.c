#include "3-calc.h"

/**
 * get_op_func - match the operator with the right function
 *
 * @s: operator param
 *
 * Return: A pointer to the function that will do
 * the selected operation
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 10)
	{
		if (*s == ops->op[i])
			break;
		i++;
	}
	return (ops[i / 2].f);
}
