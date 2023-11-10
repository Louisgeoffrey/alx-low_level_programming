#include "lists.h"

/**
 * free_dlistint - This frees a double linked list.
 * @head: Head of the list.
 *
 * Return: No return
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
