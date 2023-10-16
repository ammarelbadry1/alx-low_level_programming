#include "lists.h"

/**
 * dlistint_len - gets the number of the elements of a linked list
 *
 * @h: head pointer of the linked list
 *
 * Return: the number of the elements in a linked list of integers
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t len;

	len = 0;
	current = h;
	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	return (len);
}
