#include "lists.h"
#include <stdlib.h>

/**
  * listint_len - rwturns the number of element in a linked list
  * @h: pointer to head
  *
  * Return: number of element
  */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
