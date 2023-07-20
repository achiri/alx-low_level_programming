#include "main.h"

/**
* more_numbers - prints numbers on 10 lines
* Return: Return void and exit
* @i: character to use
* @j: another integer
*/

void more_numbers(void)

{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	
	{
		for (j = 0; j < 15; j++)
		
		{
			if (j >= 10)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		
		}
		_putchar('\n');
	}
}
