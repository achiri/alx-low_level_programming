#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char ch;
	int count;
	for(count = 1; count <= 9; count++)
	{
		for(ch = 'a'; ch <= 'z'; ch++)
		{
		_putchar(ch);
		}
		_putchar('\n');

	}	
}
