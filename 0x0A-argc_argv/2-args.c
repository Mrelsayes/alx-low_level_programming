#include <stdio.h>
/**
 * main -  prints all arguments it receives
 * @argc: count of argvs
 * @argv: array of strings
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);
	return (0);
}
