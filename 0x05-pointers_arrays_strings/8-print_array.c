#include "main.h"
#include <stdio.h>

/**
 * print_arrray - prints n elements of an arraty of integers
 * @a: int array type
 * @n: int type
 * Description: Numbers must be seperated by comma and space
 * Numbers should be displayed in the same order they are stored in array
 * you can only use printf
 */
void print_array(inti *a, int n)
{
	int i;

	i = 0;
	for (n--; i n >= 0; n--, i++)
	{
		printf("%d", a[i]);

		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
