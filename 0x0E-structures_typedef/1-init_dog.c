#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes variable with struct dog type
 * @d: struct dog pointer
 * @name: dog name pointer parameter
 * @age: dog age parameter
 * @owner: dog owner pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
		if (d == NULL)
		{
			return;
		}
		d->name = name;
		d->age = age;
		d->owner = owner;
}
