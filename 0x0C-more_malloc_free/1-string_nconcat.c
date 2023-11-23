#include "main.h"
#include <stdlib.h>
/**
 *string_nconcat - function that concaenates 2 strings
 *
 * @s1 : first string
 * @s2 : second string
 * @n : number of characater for string 2
 *
 *Return: a pointer to the new allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, x, y;
	char *string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	string = malloc(sizeof(char) * (i + n + 1));
	if (string == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < i; x++)
	{
		string[x] = s1[x];
	}
	if (n >= j)
	{
		for (y = 0; y < j; y++)
		{
			string[x + y] = s2[y];
		}
	}
	else
	{
		for (y = 0; y < n; y++)
		{
			string[x + y] = s2[y];
		}
	}
	string[x + y] = '\0';
	return (string);
}
