#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Function that frees dogs
 * @d: First type
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		exit(98);
	}
	free((*d).name);
	free((*d).owner);
	free(d);
}
