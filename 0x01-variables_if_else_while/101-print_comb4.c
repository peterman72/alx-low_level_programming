#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main()
{
	int dig1, dig2, dig3;

	for (dig1 = 0; dig1 < 8; dig1++)
	{
		for (dig2 = dig1 + 1; dig2 < 9; dig2++)
		{
			for (dig3 = dig2 + 1; dig3 < 10; dig3++)
			{
				putchar((dig1 % 10) + '0');
				putchar((dig2 % 10) + '0');
				putchar((dig3 % 10) + '0');
				if (dig1 == 7 && dig2 == 8 && dig3 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
