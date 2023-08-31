#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a linked list.
 * @head: Frees a listint_t list and sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	while (current != NULL)
	{
		listint_t *temp = current;

		current = current->next;
		free(temp);
	}

	*head = NULL;
}
