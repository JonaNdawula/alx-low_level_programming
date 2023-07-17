#include "dog.h"
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

	d->name = name;
	d->age = age;
	d->owner = owner;
}
