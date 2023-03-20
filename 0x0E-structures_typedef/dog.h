#ifndef DOG_H
#define DOG_H 1

/**
 * struct dog - structure
 * @name: dog name
 * @age: dog age
 * @owner: dog's owner
 *
 * Description: a struct that hols dog's records
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}

typedef dog_t dog;

#endif
