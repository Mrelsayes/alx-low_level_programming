#include "main.h"
/**
 * print_sign - check input if its +, - or 0
 * @n: variable
 * Return: 0 if succesful
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
}
