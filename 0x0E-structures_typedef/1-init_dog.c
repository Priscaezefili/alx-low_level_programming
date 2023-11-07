#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog
 * @age: Age to initialize
 * @name: Name to initialize
 * @d: Pointer to struct dog to initialize
 * @owner: Owner to initialize
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
