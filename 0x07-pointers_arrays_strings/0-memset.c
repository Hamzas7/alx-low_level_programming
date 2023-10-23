#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @n: max bytes of the memory
 * @s: pointers to put the constant
 * @b: constant
 * Return: pointers s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0 ; n > 0 ; itr++ , n--)
	{
		s[itr] = b;
	}
	return (s);
}
