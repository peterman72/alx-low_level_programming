#include <stdio.h>
/**
 * main - prints out all the numbers in base 16 all in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;
	char alp;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
	}
	for (alp = 'a'; alp <= 'f'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
