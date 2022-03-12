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
	char upper;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	upper = toupper(alphabet);
	putchar(alphabet);
	putchar(upper);
	putchar('\n');
	}
	return (0);
}
