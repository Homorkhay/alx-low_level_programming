#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint_end - adds a new node at the end of a linked list
  * @head: double pointer to head
  * @n: data to be asigned
  *
  * Return: adress of the new element or NULL if failed
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lastNode = *head;
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (lastNode->next != NULL)
	{
		lastNode = lastNode->next;
	}

	lastNode->next = newNode;

	return (newNode);
}
