#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - Print the name, age and owner of a dog
 * @dog: struct dog pointer
**/

void print_dog(struct dog *dog)
{
	if (dog == NULL)
	{
		return;
	}
	if (dog->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", dog->name);
	}
	printf("Age: %f\n", dog->age);
	if (dog->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", dog->owner);
	}
}
