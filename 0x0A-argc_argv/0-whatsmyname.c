#include <stdio.h>
/**
 * main -  prints its name, followed by a new line
 * @argc: count of argvs
 * @argv: array of strings
 * Return: 0
*/
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
