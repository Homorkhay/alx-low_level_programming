#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - frees dogs
  * @d: Dog to be freed
  *
  * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
