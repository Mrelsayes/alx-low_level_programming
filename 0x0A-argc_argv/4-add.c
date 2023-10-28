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
	int count, str, sum = 0;

	for (count = 1; count < argc; count++)
	{
		for (str = 0; argv[count][str]; str++)
		{
			if (argv[count][str] < '0' || argv[count][str] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[count]);
	}
	printf("%d\n", sum);
	return (0);
}
