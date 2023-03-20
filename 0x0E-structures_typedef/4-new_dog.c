#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}

/**
 * new_dog - creates new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: dog_t struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name != NULL && owner != NULL)
	{
	d = malloc(sizeof(dog_t *));
	d->name = malloc(sizeof(d->name));
	d->owner = malloc(sizeof(d->owner));
	_strcpy(d->name, name);
	d->age = age;
	_strcpy(d->owner, owner);
	return (d);
	}

	return NULL;
}
