#include "variadic_functions.h"

/**
 * print_strings - print strings seprated with a specific string
 *
 * @separator: a string to separate with
 * @n: number of arguments
 *
 * Return: no return
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *current;

	va_start(ap, n);
	i = 0;
	while (i < n)
	{
		current = va_arg(ap, char *);
		if (current == NULL)
			printf("(nil)");
		else
			printf("%s", current);

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
		i++;
	}
	va_end(ap);
	putchar(10);
}
