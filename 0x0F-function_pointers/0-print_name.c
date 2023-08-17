#include "function_pointers.h"

/**
 * print_name - prints a name in a flexible way
 *
 * @name: Name to be printed
 * @f: function pointer
 *
 * Return: no return
*/

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
