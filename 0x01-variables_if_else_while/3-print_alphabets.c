#include <stdio.h>
#include <ctype.h>
/**
 * main - prints alphabets in lower case
 * then upper case
 *
 * Return: 0 when code runs succesfully
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	putchar(alphabet);
	}
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
	putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
