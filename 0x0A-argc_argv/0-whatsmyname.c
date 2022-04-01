#include "main.h"
#include <stdio.h>
/**
 * whatsmayname.c -  prints it's name followed by a new line
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (*argc > 0)
	{
	printf("%s\n", argv[0]);
	}

	return (0);
}
