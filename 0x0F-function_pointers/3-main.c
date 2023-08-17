#include "3-calc.h"

/**
 * main - Entry point
 *
 * @argc: arguments count
 * @argv: arguments values
 *
 * Return: Always 0
*/

int main(int argc, char **argv)
{
	int (*function_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}



	function_ptr = get_op_func(argv[2]);
	if (function_ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", function_ptr(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
