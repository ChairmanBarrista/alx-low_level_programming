#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node
 * at the end of a listint_t list.
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
        listint_t *node, *last;

        node = malloc(sizeof(listint_t));

        if (node == NULL)
                return (NULL);

        node->n = n;
        node->next = NULL;

        if (*head == NULL)
                *head = node;
        else
        {
                last = *head
                while (last->next != NULL)
                        last = last->next;
                last->next = node;
        }

        return (*head);
}
