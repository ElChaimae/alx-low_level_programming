#include "dog.h"
#include "stdlib.h"
/**
 * init_dog - it initiallyzes a dog struct
 * @d: dog struct
 * @name: dog name
 * @age: dog's age
 * @owner: dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
