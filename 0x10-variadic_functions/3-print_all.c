#include "variadic_functions.h"

/**
 * print_all - prints anything
 *
 * @format: List of types of arguments passed to the function
 *
 * Return: no return
*/
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, j;
	char *stringtmp;
	const char *possible_arguments = "cifs";

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (possible_arguments[j] && i != 0)
		{
			if (format[i] == possible_arguments[j])
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			stringtmp = va_arg(ap, char *);
			if (!stringtmp)
			{
				printf("(nil)");
				break;
			}
			printf("%s", stringtmp);
			break;
		} i++;
	}
	va_end(ap), putchar(10);
}
