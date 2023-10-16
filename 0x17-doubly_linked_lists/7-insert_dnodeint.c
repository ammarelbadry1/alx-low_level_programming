#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * @h: the address of the head pointer
 * @idx: the position at which we would insert
 * @n: the data to be inserted
 *
 * Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int list_range = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*h == NULL && idx == 0)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}
	current = *h;
	while (current != NULL)
	{
		if (list_range == idx)
		{
			new_node->next = current;
			new_node->prev = current->prev;
			if (current->prev != NULL)
				current->prev->next = new_node;
			else
				*h = new_node;
			current->prev = new_node;
			return (new_node);
		}
		else if (current->next == NULL && list_range + 1 == idx)
		{
			new_node->next = NULL;
			new_node->prev = current;
			current->next = new_node;
			return (new_node);
		}
		list_range++;
		current = current->next;
	}
	free(new_node);
	return (NULL);
}
