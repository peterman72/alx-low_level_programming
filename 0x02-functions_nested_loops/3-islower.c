#include "main.h"

/**
 * _islower - checks for lowercase
 * @c: char type letter
 * Return: 1 if lowercase, 0 if not lowercase
 * Description: c must be a lowercase
 */
int _islower(int c)
{
	if (c > 97 && c < 123)
		return (1);
	else
		return (0);
}
