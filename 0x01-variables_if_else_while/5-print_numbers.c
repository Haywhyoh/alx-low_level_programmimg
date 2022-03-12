#include <stdio.h>
/**
 * main - prints all code from 0-9
 *
 * Return: 0 if code is succesful
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
