#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string TO UPPERCASE
 *
 * @a : pointer to an integer
 *
 * Return: Always 0.
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] > 96 && a[i] < 123)
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}
