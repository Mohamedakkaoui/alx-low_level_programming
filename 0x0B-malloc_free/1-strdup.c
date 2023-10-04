#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly asm
 *
 *@str : pointer to a string
 *
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *a;
	int i;
	int j;
	char *b;

	if (str == NULL)
	{
		return (NULL);
	}
	b = str;
	for (i = 0; *b != '\0'; b++)
	{
		i++;
	}
	a = (char *)malloc((i + 1) * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; j <= i; j++)
		{
			a[j] = str[j];
		}
	}
	return (a);
}
