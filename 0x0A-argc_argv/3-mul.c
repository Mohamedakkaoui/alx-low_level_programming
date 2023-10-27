#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multplies 2 numbers
 *
 * @argc : number of arguments
 * @argv : array
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int result, number1, number2;
	char *input1 = argv[1];
	char *input2 = argv[2];

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	number1 = atoi(input1);
	number2 = atoi(input2);
	result = number1 * number2;
	printf("%d\n", result);
	return (0);
}
