#include "main.h"

/**
 * _abs - return absolute value of integer
 * @n: integer to use
 * Return: absolute value and exit
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);

	return (0);
}
