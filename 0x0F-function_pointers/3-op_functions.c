#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition
 * @a: int 1
 * @b: int 2
 * Return: rsult
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction
 * @a: int 1
 * @b: int 2
 * Return: rsult
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: int 1
 * @b: int 2
 * Return: rsult
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: int 1
 * @b: int 2
 * Return: rsult
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo
 * @a: int 1
 * @b: int 2
 * Return: rsult
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
