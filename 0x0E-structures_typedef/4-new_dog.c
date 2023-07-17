#include "dog.h"
#include <stdlib.h>
/**
 *new_dog - creates a new dog
 *
 *@name: dog's name
 *@age: dog's age
 *@owner: dog's owner
 *
 * Return: pointer to new dog
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
	while (name[lengthOfOwner++])
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
	for (i = 0; i <= lengthOfOwner; i++)
		dognew->owner[i] = owner[i];
	return (dognew);

}


