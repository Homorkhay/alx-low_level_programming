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
	listint_t *currentMode = *head;

	while (currentMode != NULL)
	{
		listint_t *nextMode = currentMode->next;

		free(currentMode);
		curentMode = nextMode;
	}

	*head = NULL;
}
