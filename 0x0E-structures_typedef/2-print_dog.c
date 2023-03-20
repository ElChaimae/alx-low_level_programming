#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * print_dog - it prints a struct dog
 * @d: struct dog
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(0);
	if (d->name == NULL)
		printf("Name: (nil)");
	if (d->owner == NULL)
		printf("(nil)");
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
