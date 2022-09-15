#include "main.h"

/**
 * _isupper - checks if a character is upper
 * @c: character to be tested
 * Return: 1 whether it is, 0 otherwise 
 */

int int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
