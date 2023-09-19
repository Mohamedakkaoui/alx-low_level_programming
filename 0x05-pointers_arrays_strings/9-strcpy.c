#include "main.h"

/**
 * *_strcpy - function that copies the string
 *
 * @dest: pointer of a character to copy to
 * @src: pointer of a character to copy from
 *
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for ( ; j < l ; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}

