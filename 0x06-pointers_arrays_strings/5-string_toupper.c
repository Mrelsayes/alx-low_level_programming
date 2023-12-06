#include "main.h"
/**
 * string_toupper -  changes all lowercase letters of a string to uppercase
 * @str: string
 * Return: str
 */
char *string_toupper(char *str)
{
	int str_len;

	for (str_len = 0; str[str_len] != '\0'; str_len++)
	{
		if (str[str_len] >= 'a' && str[str_len] <= 'z')
		{
			str[str_len] = str[str_len] - 32;
		}
	}
	return (str);
}
