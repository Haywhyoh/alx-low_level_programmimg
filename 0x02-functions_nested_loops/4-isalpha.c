#include "main.h"
/**
 * _isalpha - check if the char is alpha
 * @c: c is tested to be between A - Z
 *
 * Return: 1 if alpha
 * 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
