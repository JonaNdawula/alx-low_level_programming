#include <stdlib.h>
#include "dog.h"
/**
 * new_dog -create a new dog
 * @name: pointer to a char for name of dog
 * @age: age of dog
 * @owner: pointer to a char for owner of dog
 * Return: pointer to a new dog of type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int lengthOfName, lengthOfOwner, i;
	dog_t *dognew;

	dognew = (dog_t *)malloc(sizeof(dog_t));
	if (dognew == NULL)
		return (NULL);
	lengthOfName = lengthOfOwner = 0;
	while (name[lengthOfName++])
		;
	while (owner[lengthOfOwner++])
		;
	dognew->name = malloc(lengthOfName * sizeof(dognew->name));
	if (dognew->name == NULL)
	{
		free(dognew);
		return (NULL);
	}
	for (i = 0; i <= lengthOfName; i++)
		dognew->name[i] = name[i];
	dognew->age = age;
	dognew->owner = malloc(lengthOfOwner * sizeof(dognew->owner));
	if (dognew->owner == NULL)
	{
		free(dognew->name);
		free(dognew);
		return (NULL);
	}
	for (i = 0; i <= lengthOfName; i++)
		dognew->name[i] = name[i];
	dognew->age = age;
	dognew->owner = malloc(lengthOfOwner * sizeof(dognew->owner));
	if (dognew->owner == NULL)
	{
		free(dognew->name);
		free(dognew);
		return (NULL);
	}
	for (i = 0; i <= lengthOfOwner; i++)
		dognew->owner[i] = owner[i];
	return (dognew);
}

