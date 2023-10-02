#include "main.h"

/**
 * *_strncpy - function taht copies a string
 *
 * @dest : pointer to a string
 * @src : pointer t a string
 * @n : number of bytes
 *
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
	}
	j = i;
	while (n > j)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
