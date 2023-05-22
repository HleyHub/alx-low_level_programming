#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Structure type
 * @d: First type
 * @name: Second type
 * @age: Third type
 * @owner: Fourth type
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
