#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - add all its parameters
 *
 * @n: number of arguments will be passed
 *
 * Return: the sum of all its parameters
 * Or 0 when n = 0
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);

	va_start(ap, n);
	sum = 0;
	i = 0;
	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (sum);
}
