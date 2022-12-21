#include "main.h"
#include <stdio.h>

/**
 * print_array - prints `n` elements of an array of integers
 * @a: int type array pointer
 * @n: int type integer
 * Description: Numbers must be seperated by comma and space
 * The number should be displayed in the same order in the array
 * You are allowed to use printf
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
