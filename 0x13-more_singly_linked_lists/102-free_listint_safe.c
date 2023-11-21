#include "lists.h"

/**
 * free_listint2 - frees a list
 *
 * @head: pointer
 *
 */
size_t free_listint_safe(listint_t **h);
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		(*head) = temp;
	}
}
