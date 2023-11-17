#include "main.h"
/**
 * _strstr - Entry point
 *
 * @haystack: pointer to a string
 * @needle: pointer to a string
 *
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	char *i;
	char *j;

	for (; *haystack != '\0'; haystack++)
	{
		i = haystack;
		j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}

		if (*j == '\0')
			return (haystack);
	}

	return (0);
}
