#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - read text file print to stdout
 *@filename : text file being red
 *@letters : number of letters to be read and print
 *Return:actual number of letters it could read and print
 *    and 0 oterwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a, b, c;
	char *i;

	a = open(filename, O_RDONLY);
	if (a == -1)
	{
		return (0);
	}
	i = malloc(sizeof(char) * letters);
	c = read(a, i, letters);
	b = write(STDOUT_FILENO, i, c);

	free(i);
	close(a);
	return (b);
}
