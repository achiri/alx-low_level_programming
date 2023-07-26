#include "main.h"

/**
 * _strcat - join two strings
 * @dest: string to be appended to
 * @src: string to append
 * Return: concatenated string and exit
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
