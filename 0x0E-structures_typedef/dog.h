#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Dog
 * @dog_name: the name of the dog
 * @dog_age: the age of the dog
 * @dog_owner: the owner of the dog
 * Desc: header file
 */
typedef struct dog
{
char *dog_name;
float dog_age;
char *dog_owner;
} dog_t;
void init_dog(struct dog *d, char *dog_name, float dog_age, char *dog_owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *dog_name, float dog_age, char *dog_owner);
void free_dog(dog_t *d);
char *_strncpy(char *dest, char *src, int n);
int _strlen(char *s);

#endif