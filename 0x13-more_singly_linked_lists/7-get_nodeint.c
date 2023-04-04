#include "lists.h"
#include <stdlib.h>

/**
  * get_nodeint_at_index - returns the nth node of a linkedlist
  * @head: Pointer to head
  * @index: index of the node
  *
  * Return: returns nth node
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		i++;
		head = head->next;
	}
	return (NULL);
}
