#include "lists.h"
#include <stdlib.h>

/**
  * free_listint2 - fres a linked list
  * @head: double pointer to head
  *
  * Return: .....
  */

void free_listint2(listint_t **head)
{
	listint_t *currentNode = *head;

	while (currentNode != NULL)
	{
		listint_t *nextNode = currentNode->next;

		free(currentNode);
		curentNode = nextNode;
	}

	*head = NULL;
}
