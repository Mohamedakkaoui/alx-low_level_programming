#include "main.h"
#include <stdio.h>
/**
 * main - function taht prints the sum of certain multiplies
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 1;
	int sum;

	sum = 0;

	do {
		if (((i % 3) == 0) || ((i % 5) == 0))
			sum = sum + i;
		i++;
	} while (i < 1024);

	printf("%d\n", sum);
	return (0);
}
