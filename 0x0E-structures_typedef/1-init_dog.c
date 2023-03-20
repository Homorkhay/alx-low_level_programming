#include "dog.h"
#include <stdlib.h>

/**
  * init_dog - writes a function that initiaze struct dog
  * @d: initialized struct
  * @name: Name of dog
  * @age: Age of dog
  * @owner: Owner of dog
  *
  * Return: Nothing
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age =  age;
	d->owner = owner;
}
