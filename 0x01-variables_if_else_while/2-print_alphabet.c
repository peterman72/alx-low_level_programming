#include <stdio.h>
/**
 * main - prints the alphabets in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp;

	for(alp = 'a'; alp <= 'z'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
