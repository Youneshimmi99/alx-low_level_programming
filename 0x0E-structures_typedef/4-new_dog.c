#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - create new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer of new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int name_len, owner_len, n;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (name_len = 0; name[name_len]; name_len++)
		;
	name_len++;
	dog->name = malloc(name_len * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (n = 0; n < name_len; n++)
		dog->name[n] = name[n];
	dog->age = age;
	for (owner_len = 0; owner[owner_len]; owner_len++)
		;
	owner_len++;
	dog->owner = malloc(owner_len * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (n = 0; n < owner_len; n++)
		dog->owner[n] = owner[n];
	return (dog);
}
