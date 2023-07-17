#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes the variables of the dog struct
 *@d:a structure of type dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL || name == NULL || owner == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
