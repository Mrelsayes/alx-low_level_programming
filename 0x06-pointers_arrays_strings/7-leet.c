#include "main.h"
/**
 * leet -  encodes a string into 1337
 * @str: string
 * Return: str
 */
char *leet(char *str)
{
	char aleet[] = {'A', 'E', 'O', 'T', 'L', 'a', 'e', 'o', 't', 'l'};
	char a1337[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	int i = 0;
	int str_len = 0;

	for (; i < 10; i++)
	{
		for (; str[str_len] != '\0'; str_len++)
		{
			if (str[str_len] == aleet[i])
			{
				str[str_len] = a1337[i];
			}
		}
		str_len = 0;
	}
	return (str);
}
