#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: content in the file
 * Return: 1 || -1
 */
int create_file(const char *filename, char *text_content)
{
	int i, x, z;

	if (!filename)
	{
		return (-1);
	}
	i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (i == -1)
	{
		return (-1);
	}

	if (!text_content)
	{
		text_content = "";
	}
	for (x = 0; text_content[x]; x++)
	;

	z = write(i, text_content, x);

	if (z == -1)
	{
		return (-1);
	}
	close(i);

	return (1);
}
