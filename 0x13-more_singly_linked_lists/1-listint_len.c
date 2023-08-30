#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Counts the number of elements in a linked list.
 * @h: A pointer to the head of the linked list.
 * Return: The number of elements in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
