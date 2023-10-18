#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: destination of a string
 * @src: source of a string
 * @n: number of bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0 ; i < n && *src != '\0' ; i++)
	{
		dest[len + i] = '\0';
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
