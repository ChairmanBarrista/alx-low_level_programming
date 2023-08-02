#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - a function that adds a new node at the
 * beginning of a listint_t list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 * Return: pointer to the new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
