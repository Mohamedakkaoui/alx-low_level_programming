#include "main.h"
#include <stdio.h>
/**
 * comparing - compares each char of the string
 *
 * @s : the string
 * @i : index for the string
 * @j : length of the string
 *
 * Return: 1 if s is palindrome ,0 oterwise.
 */
int comparing(char *s, int i, int j)
{
	if (i >= j)
	{
		return (1);
	}
	if (s[i] != s[j])
	{
		return (0);
	}
	return (comparing(s, i + 1, j - 1));
}
/**
 * is_palindrome - function that checks if a string is palindrome
 *
 * @s : a string
 *
 *Return: 1 if s is plaidrome , 0 if not.
 */
int is_palindrome(char *s)
{
	int i = 0;
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	return (comparing(s, i, j - 1));
}

