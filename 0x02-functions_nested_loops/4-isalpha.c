#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: char type letter
 * Return: 1 if letter, lowercase or uppercase, 0 if not
 * Description: c must be letter, lowercase or uppercase
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
