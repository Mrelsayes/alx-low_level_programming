#include "main.h"
/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename
 * @letters: numbers of letters
 * Return: numbers of letters | 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	ssize_t i, z;
	char *flag;

	if (!filename)
	{
		return (0);
	}
	x = open(filename, O_RDONLY);

	if (x == -1)
	{
		return (0);
	}
	flag = malloc(sizeof(char) * (letters));
	if (!flag)
	{
		return (0);
	}
	i = read(x, flag, letters);
	z = write(STDOUT_FILENO, flag, i);

	close(x);
	free(flag);

	return (z);
}
