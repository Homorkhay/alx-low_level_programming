#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * list_len - returns the number of elements in a linked list
  * @h: Linked list
  *
  * Return: Return the number of nodes in the list
  */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
