#include "lists.h"
#include <stdio.h>

/**
 * free_listint - function that frees a listint_t list
 * @head: listint_t list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		head->next = tmp;
		free(head);
		tmp = head;
	}
}
