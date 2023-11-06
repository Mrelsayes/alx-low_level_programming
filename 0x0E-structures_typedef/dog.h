#include <stdio.h>
#include <stdlib.h>
#ifndef FILE_DOG
#define FILE_DOG
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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
