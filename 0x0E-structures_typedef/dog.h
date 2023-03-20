
/**
 * struct dog - structure
 * @name: dog name
 * @age: dog age
 * @owner: dog's owner
 *
 * Description: a struct that hols dog's records
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

