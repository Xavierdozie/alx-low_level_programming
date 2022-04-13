#include "main.h"
/**
 * _isalpha - Shows 1 if the input is lowercase or uppercase
 * Another cases, show 0
 *
 * @c: The character in the ASCII code
 *
 * Return: 1 for letters. Return 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}
