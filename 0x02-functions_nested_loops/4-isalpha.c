#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: parameter to be checked
 * Return: 1 on success
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
