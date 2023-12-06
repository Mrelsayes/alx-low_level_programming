#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string
*/
void rev_string(char *s)
{
	int i = -1, z = 0, y = 0;

	for (; s[i + 1] != '\0'; i++)
	;
	char x[i];

	x[i] = '\0';

	for (; z <= i; z++)
	{
		x[z] = s[z];
	}

	for (; (z - 1) >= 0; z--)
	{
		s[y] = x[z - 1];
		y++;
	}
}
