#include "main.h"

/**
 * _isdigit - checks for a digit in range 0 to 9
 * @c: integer given
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
