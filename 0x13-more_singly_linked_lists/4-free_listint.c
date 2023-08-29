#include "lists.h"

/**
 * free_listint - releases memory occupied by a linked list
 * @head: listint_t list that needs to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

