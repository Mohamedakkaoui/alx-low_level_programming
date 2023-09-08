#include <stdio.h>

/**
 * main - Entry point  prints the alphabet in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x;
	char y;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar (x);
	}
	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar (y);
	}
	putchar ('\n');
	return (0);
}
