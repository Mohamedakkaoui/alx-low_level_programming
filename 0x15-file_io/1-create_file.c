#include "main.h"
/**
 * create_file - function that creates a file
 *@filename : name of the file
 *@text_content : NULL terminated string
 *Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int i, b, a = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (a = 0; text_content[a]; a++)
		{
			;
		}
	}
	i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b = write(i, text_content, a);
	if (i == -1 || b == -1)
	{
		return (-1);
	}
	close(i);
	return (1);
}
