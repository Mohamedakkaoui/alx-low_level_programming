#include <stdio.h>

/**
 * main - Entry point  prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;


	for (x = 0; x < 10; x++)
	{
		putchar ('0' + x);
		putchar (',');
		putchar (' ');
	}
	putchar ('\n');
	return (0);
}
