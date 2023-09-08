#include <stdio.h>

/**
 * main - Entry point prints all numbers of base 16
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	char y;

	for (x = 0 ; x < 10; x++)
		putchar ('0' + x);
	for (y = 'a'; y  < 'g'; y++)
		putchar (y);
	putchar('\n');
	return (0);
}
