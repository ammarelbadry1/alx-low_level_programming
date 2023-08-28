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
	listint_t *current, *temp;

	if (head != NULL)
	{
		current = *head;
		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}
