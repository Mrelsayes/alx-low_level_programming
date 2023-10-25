#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: num
 * @y: power
 * Return: value of x
*/
int _pow_recursion(int x, int y)
{
	int i = x;

	if (y == 1)
		return (i);
	else if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y > 1)
		return (x * _pow_recursion((x), (y - 1)));
}
