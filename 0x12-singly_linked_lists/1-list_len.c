#include "lists.h"

/**
 * list_len - takes a linked list and calculates its len
 *
 * @h: the header of a linked list
 *
 * Return: the number of elements in the passed linked list
*/

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
