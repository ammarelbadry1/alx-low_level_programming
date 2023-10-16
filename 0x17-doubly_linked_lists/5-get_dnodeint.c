#include "lists.h"

/**
 * get_dnodeint_at_index - get a node at specific index
 *
 * @head: points to the first node in the list
 * @index: position to check
 *
 * Return: the nth node of a dlistint_t linked list if it exists
 * Otherwise, NULL.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nth_node;
	unsigned int list_range = 0;

	nth_node = head;
	while (nth_node != NULL)
	{
		if (list_range == index)
			return (nth_node);
		list_range++;
		nth_node = nth_node->next;
	}
	return (NULL);
}
