#include "lists.h"
#include <stdlib.h>

/**
  * sum_listint - returns the sum of all the data(n) of a linked list
  * @head: pointer to head
  *
  * Return: ....
  */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
