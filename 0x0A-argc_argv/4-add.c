#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - program that prints the number of arguments passed into it
 * @argc : number of arguments
 * @argv : array of commands
 *Return: always 0.
 */
int main(int argc, char **argv)
{
	int result = 0, num = 0;
	int x, y;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y]; y++)
		{

			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
			num = num * 10 + (argv[x][y] - '0');
		}
		result += num;
		num = 0;
	}
	printf("%d\n", result);
	return (0);
}
