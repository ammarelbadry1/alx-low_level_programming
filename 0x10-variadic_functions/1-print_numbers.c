#include "variadic_functions.h"

/**
 * print_numbers - print numbers seprated with a specific string
 *
 * @separator: a string to separate with
 * @n: number of arguments
 *
 * Return: no return
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
		i++;
	}
	va_end(ap);
	putchar(10);
}
