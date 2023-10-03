#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argv: input
 * @argc: input
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		int num = 0;

		for (j = 0; argv[i][j]; j++)
		{

			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			num = num * 10 + (argv[i][j] - '0');
		}
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
