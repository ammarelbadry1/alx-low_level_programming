#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: linked list head pointer
 *
 * Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t len = 0;
	const listint_t *current;

	current = h;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		len++;
	}
	return (len);
}
