#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first linked list node
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL otherwise
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *another;

	another = malloc(sizeof(listint_t));
	if (!another)
		return (NULL);

	another->n = n;
	another->next = *head;
	*head = another;

	return (another);
}
