#include <stdio.h>

/**
 * main - function prints numbers from 0 to 100 with Fizz-buzz
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int j;
	int k;


	for (i = 1; i <= 100; i++)
	{
		j = i % 3;
		k = i % 5;

		if (j == 0 && k != 0)
		{
			printf("Fizz ");
		}
		else if (k == 0 && i != 100 && j != 0)
		{
			printf("Buzz ");
		}
		else if (k == 0 && j == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i == 100)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
