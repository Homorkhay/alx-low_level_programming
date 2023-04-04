#include "lists.h"
#include <stdlib.h>

/**
  * insert_nodeint_at_index - insert new node at a given position
  * @head: double pointer to head
  * @idx: index of the list where the new node should be added
  * @n: data to be assigned
  *
  * Return: the address of the new node or NULL if failed
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *prev_node = *head;

	unsigned int i;

	if (*head == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		if (new_node == NULL)
		{
			return (NULL);
		}

		new_node->n = n;
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (prev_node == NULL)
			return (NULL);
		prev_node = prev_node->next;
	}

	new_node->n = n;
	new_node->next = prev_node->next;
	prev_node->next = new_node;

	return (new_node);
}
