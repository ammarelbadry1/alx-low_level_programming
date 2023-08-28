#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: a pointer to the head pointer of the linked list
 * @idx: the position where the node to be inserted
 * @n: the node data
 *
 * Return: the address of the new node
 * or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new, *temp;
	unsigned int i;

	current = *head;
	i = 0;
	while (i < idx && current != NULL)
	{
		if (i == (idx - 1))
			temp = current;
		current = current->next;
		i++;
	}
	if (current == NULL && idx != 0)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		temp->next = new;
		new->next = current;
	}
	return (new);
}
