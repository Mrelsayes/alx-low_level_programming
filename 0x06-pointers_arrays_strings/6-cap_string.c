#include "main.h"
/**
 * cap_string -  capitalizes all words of a string
 * @str: string
 * Return: str
 */
char *cap_string(char *str)
{
	int str_len = 0;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	for (; str[str_len] != '\0'; str_len++)
	{
		if (str[str_len] >= 1 && str[str_len] <= 47)
		{
			if (str[str_len + 1] >= 'a' && str[str_len + 1] <= 'z')
			{
				str[str_len + 1] = str[str_len + 1] - 32;
			}
		}
	}
	return (str);
}
