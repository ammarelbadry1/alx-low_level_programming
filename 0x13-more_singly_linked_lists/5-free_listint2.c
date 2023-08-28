#include "lists.h"

/**
 * free_listint2 - frees listint_t list
 *
 * @head: Head pointer of a linked list
 *
 * Return: no return
*/

void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	head = NULL;
}
