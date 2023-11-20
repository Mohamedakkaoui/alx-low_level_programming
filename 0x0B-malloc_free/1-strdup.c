#include <stdlib.h>
/**
 * _strdup - function tat returns a copy of a string
 *
 * @str : string
 *
 *Return: returns a copy of a string
 */
char *_strdup(char *str)
{
	char *d;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	d = (char *)malloc(i + 1);
	if (d == NULL)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; j < i; j++)
		{
			d[j] = str[j];
		}
	}
	return (d);
}
