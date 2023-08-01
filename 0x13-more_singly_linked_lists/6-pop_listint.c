#include "lists.h"

/**
 * pop_listint - deletes a linked list head node
 * @head: points to the first element in the linked list
 *
 * Return: data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int no;

	if (!head || !*head)
		return (0);

	no = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (no);
}
