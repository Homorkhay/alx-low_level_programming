#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * pop_listint - deletes the head node of a linked list
  * @head: double pointer to head
  *
  * Return: the head node data if empty return
  */

int pop_listint(listint_t **head)
{
	int temp;
	listint_t *next_node = (*head)->next;

	if (*head == NULL)
	{
		return (0);
	}

	temp = (*head)->n;

	free(*head);
	*head = next_node;
	return (temp);
}
