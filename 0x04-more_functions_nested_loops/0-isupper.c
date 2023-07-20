#include "main.h"

/**
* _isupper - checks if an input is Upper or lower case
* @c: Character to check
* Return: Return 1 or 0 and exit
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
