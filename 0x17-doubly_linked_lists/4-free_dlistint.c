#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 *
 * @head: the address of the head pointer
 *
 * Return: no return
*/
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		while (head->next != NULL)
		{
			head = head->next;
			free(head->prev);
		}
	}
	free(head);
}
