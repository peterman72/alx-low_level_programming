#include <stdio.h>
/**
 * main - prints lowercase alphabets in reverse
 * Return: Always 0 (success)
 */
int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
