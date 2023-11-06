#include "dog.h"

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - calculate length of a string
 * @str: string
 *
 * Return: length string.
 */
int _strlen(char *str)
{
	int str_len = 0;

	while (*str++)
		str_len++;

	return (str_len);
}

/**
 * _strcopy - Copies string
 * @dest: destination
 * @src: source
 * Return: pointer
 */
char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - Create new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	(*new_dog).owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*new_dog).owner == NULL)
	{
		free((*new_dog).name);
		free(new_dog);
		return (NULL);
	}

	(*new_dog).name = _strcopy((*new_dog).name, name);
	(*new_dog).age = age;
	(*new_dog).owner = _strcopy((*new_dog).owner, owner);

	return (new_dog);
}
