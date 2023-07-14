#include <stdio.h>

/**
 * main - Prints the alphabet without q and e
 * Return: return 0 and exit the program
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != 'e' && n != 'q')
			putchar(n);
	}

	putchar('\n');
	return (0);
}
