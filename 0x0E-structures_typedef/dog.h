#ifndef FILE_DOG
#define FILE_DOG
#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - dog's structure
 * @name: type = char *
 * @age: type = float
 * @owner: type = char *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
