#include 'main.h'

/**
 * main - checks for uppercase character
 * Return: 1 if uppercase else 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
