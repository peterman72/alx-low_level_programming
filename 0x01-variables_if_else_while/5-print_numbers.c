#include <stdio.h>
/**
 * main - prints all single digits numbers of base 10
 * starting from 0
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}
