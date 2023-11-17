#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the number of arguments passed into it
 * @argc : number of arguments
 * @argv : array of commands
 *Return: always 0.
 */
int main(int argc, char **argv)
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int n1 = atoi(argv[1]);
		int n2 = atoi(argv[2]);
		
		result  = n2 * n1;
		printf("%d\n", result);
	}
	return (0);
}
