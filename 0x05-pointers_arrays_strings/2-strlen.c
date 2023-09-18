#include "main.h"

/**
 * _strlen - function that return the length of a string
 *
 * @s : charace of a string
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
