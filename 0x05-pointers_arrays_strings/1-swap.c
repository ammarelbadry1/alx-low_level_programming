#include "main.h"

/**
 * swap_int - swap two integers
 *
 * @a: first integer address
 * @b: second integer address
 *
 * Return: no return
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
