#include <stdio.h>

/**
 * main - function that the first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long long int a, b, sum;

	a = 0;
	b = 1;

	for (i = 0; i < 50; i++)
	{
		sum = a + b;
		printf("%11u, ", sum);

		a = b;
		b = sum;
		sum = a;
	}
	return (0);
}
