#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: num of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	unsigned int x, sum, n;

	sum = 0;

	if (argc < 3)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (argc-- && argc > 0)
	{
		for (x = 0; argv[argc][x] != '\0'; x++)
		{
			if (!(isdigit(argv[argc][x])))
			{
				printf("Error\n");
				return (1);
			}
		}
		n = atoi(argv[argc]);
		sum += n;
	}
	printf("%d\n", sum);
	return (sum);
}
