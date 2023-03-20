#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_dog - prints all data of the dog
  * @d: Element to be printed
  *
  * Return: Nothing
  */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
