#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - Function that creates a new dog
 * @name: First type
 * @age: Second type
 * @owner: Third type
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int s1 = strlen(name), s2 = strlen(owner);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	(*new_dog).name = malloc(s1 + 1);
	(*new_dog).owner = malloc(s2 + 1);
	if ((*new_dog).name == NULL || (*new_dog).owner == NULL)
	{
		free((*new_dog).name);
		free((*new_dog).owner);
		free(new_dog);
		return (NULL);
	}
	strcpy((*new_dog).name, name);
	strcpy((*new_dog).owner, owner);
	(*new_dog).age = age;
	return (new_dog);
}
