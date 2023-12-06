#include "main.h"
/**
 * _islower - check if char is lowercase
 *@c: is char
 * Return: 1 if char is lowercase, otherwise 0.
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
}
