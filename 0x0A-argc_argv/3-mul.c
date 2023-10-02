#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that prints all arguments it receives
 *
 * @argc : an integer
 * @argv : a pointer to a string
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		exit(-1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);
	return (0);

}
