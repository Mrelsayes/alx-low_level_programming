#include <stdio.h>
#include <stdlib.h>
/**
 * main -  prints its name, followed by a new line
 * @argc: count of argvs
 * @argv: array of strings
 * Return: 0 || 1
*/
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	printf("Error\n");
	return (1);
}
