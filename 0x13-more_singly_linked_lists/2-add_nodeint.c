#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint - adds a new node at the beginning of a list
  * @head: double pointer to head
  * @n: data to be assigned
  *
  * Return: address of the new element or NULL if failed
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
