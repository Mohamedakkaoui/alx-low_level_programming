#include "main.h"

/**
 * *_strcat - function that concatenates 2 strings
 *
 * @dest : a string input
 * @src : a string input
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
