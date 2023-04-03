#include "lists.h"
#include <stdlib.h>

/**
  * free_listint - frees the list
  * @head: pointer to head
  *
  * Return:
  */

void free_listint(listint_t *head)
{
	listint_t *current_node = head;

	while (current_node != NULL)
	{
		listint_t *next_node = current_node->next;

		free(current_node);
		current_node = next_node;
	}

	head = NULL;
}
