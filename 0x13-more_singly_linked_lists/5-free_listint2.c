#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees a linked list.
 * @head: Frees a listint_t list and sets the head to NULL.
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t *temp = head;

		head = head->next;
		free(temp);
	}

	*head = NULL;
}
