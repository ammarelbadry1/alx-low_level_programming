#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at some position in linked list.
 *
 * @head: the address of the head pointer
 * @index: the position of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int list_range = 0;

	current = *head;
	while (current != NULL)
	{
		if (index == list_range)
		{
			if ((current->prev == NULL) & (current->next == NULL))
			{
				*head = NULL;
			}
			else if (current->prev == NULL)
			{
				current->next->prev = NULL;
				*head = current->next;
			}
			else if (current->next == NULL)
			{
				current->prev->next = NULL;
			}
			else
			{
				current->prev->next = current->next;
				current->next->prev = current->prev;
			}
			free(current);
			return (1);
		}
		list_range++;
		current = current->next;
	}
	return (-1);
}
