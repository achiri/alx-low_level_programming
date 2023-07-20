#include "main.h"

/**
* _isdigit - checks if input is digit
* @c: integer to check
* Return: 1 or 0 and exits
*/

int _isdigit(int c)

{
	if (c >= '0' && c <= '9')

		return (1);
	
	return (0);
}
