#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - returns a p to a copy of the string
 *
 * @str : string
 *
 *Return: Always 0.
 */
char *_strdup(char *str)
{
	char *copy;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	copy = (char *)malloc(sizeof(char) * i);
	if (copy == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		copy[j] = str[j];
	}
	return (copy);
}
