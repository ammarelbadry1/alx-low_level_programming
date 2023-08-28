#include "lists.h"

/**
 * listint_len - get the number of the elements of a listint_t list
 *
 * @h: linked list head pointer
 *
 * Return: the number of nodes
*/

size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	const listint_t *current;

	current = h;
	while (current != NULL)
	{
		current = current->next;
		len++;
	}
	return (len);
}
