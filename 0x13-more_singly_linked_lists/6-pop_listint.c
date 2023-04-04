#include "lists.h"
#include <stdlib.h>

/**
  * pop_listint - deletes the head node of a linked list
  * @head: double pointer to head
  *
  * Return: the head node data if empty return 0
  */

int pop_listint(listint_t **head)
{
	int temp = 0;
	listint_t *next_node;

	if (*head == NULL)
	{
		return (0);
	}
	if (*head != NULL)
	{
		next_node = (*head)->next;
		temp = (*head)->n;
		free(*head);
		*head = next_node;
	}
	return (temp);
}
