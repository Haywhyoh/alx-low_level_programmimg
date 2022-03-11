#include <stdio.h>
/**
 * main - Prints alhabets
 * in lower case
 *
 * Return: 0 if code runs succesfuly
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
