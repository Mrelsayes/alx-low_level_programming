#include "main.h"
/**
 * sqroot - the real square root function to avoid reseting i to 0
 * @n: num
 * @i: square root of n
 * Return: natural square root
*/
int sqroot(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i < n)
	{
		return (sqroot(n, ++i));
	}
	else if (i * i != n)
	{
		return (-1);
	}
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: num
 * Return: natural square root
*/
int _sqrt_recursion(int n)
{
	sqroot(n, 1);
}
