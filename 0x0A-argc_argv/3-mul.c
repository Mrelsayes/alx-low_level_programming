#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: num of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x, result = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (x = 1; x < argc; x++)
	{
		result *= atoi(argv[x]);
	}
	printf("%d\n", result);
	return (0);
}
