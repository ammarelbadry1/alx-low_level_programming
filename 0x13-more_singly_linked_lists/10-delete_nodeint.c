#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at the passed index,
 * of a listint_t linked list
 *
 * @head: a pointer to the head pointer of the linked list
 * @index: the position of the node to be deleted
 *
 * Return: 1 if it succeeded
 * -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int i;

	i = 0;
	current = *head;
	while (i < index && current != NULL)
	{
		if (i == index - 1)
			previous = current;
		current = current->next;
		i++;
	}
	if (current == NULL || (current->next == NULL && index != 0))
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
	}
	else
	{
		previous->next = current->next;
		free(current);
	}
	return (1);
}
