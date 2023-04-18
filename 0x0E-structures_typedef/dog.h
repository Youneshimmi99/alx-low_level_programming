#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Dog
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner
 * Desc: header file
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strncpy(char *dest, char *src, int num);
int _strlen(char *s);

#endif