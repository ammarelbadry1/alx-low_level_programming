#include "3-calc.h"

/**
 * op_add - add two numbers
 *
 * @a: first param
 * @b: second param
 *
 * Return: the sum of a and b
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two numbers
 *
 * @a: first param
 * @b: second param
 *
 * Return: the difference of a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers
 *
 * @a: first param
 * @b: second param
 *
 * Return: the product of a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two numbers
 *
 * @a: first param
 * @b: second param
 *
 * Return: the result of the division of a by b
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
 * op_mod - module of two numbers
 *
 * @a: first param
 * @b: second param
 *
 * Return: the remainder of the division of a by b
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
