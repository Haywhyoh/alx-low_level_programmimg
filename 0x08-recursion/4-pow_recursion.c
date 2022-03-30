#include "main.h"
/**
 * _pow_recursion - returns the power of x by y
 * @x: the base
 * @y: the power
 *
 * Return: the final answer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
