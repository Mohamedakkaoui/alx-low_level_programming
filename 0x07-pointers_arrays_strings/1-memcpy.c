#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *
 *@dest: pointer to a memory where data is gonna be stored
 *@src: pointer to a memory where we copy te data from
 *@n: number of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
