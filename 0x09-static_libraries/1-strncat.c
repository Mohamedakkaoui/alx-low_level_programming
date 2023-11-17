#include "main.h"

/**
 *_strncat  - function concatenates 2 strings
 *
 * @dest :  pointer to a string
 * @src : pointer to a string
 * @n : number of bytes
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		if (n > 0)
		{
			dest[i] = src[j];
			n--;
		}
			i++;
	}
	dest[i] = '\0';
	return (dest);
}
