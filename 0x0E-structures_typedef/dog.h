#ifndef DOG_H
#define DOG_H
/**
 * struct dog - New type structure
 * @name: First type
 * @age: Second type
 * @owner: Third type
 */
struct dog
{
	char *name;
	float  age;
	char *owner;
};
/**
 * dog_t - Type structure
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
