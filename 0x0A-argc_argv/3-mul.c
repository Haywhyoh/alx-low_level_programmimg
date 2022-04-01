#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplied two different numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 if fails and 0 for success
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", mul);
	}
	return (0);
}
