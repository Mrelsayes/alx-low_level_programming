#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n : variable
 * Return: 1 or 0
*/
int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
	{
		_putchar('0' + -x);
		return (-x);
	}
	else
	_putchar('0' + x);
	return (x);
}
