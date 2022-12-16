#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: int type number
 * Return: 1 if digit otherwise 0
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
