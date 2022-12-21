#include "main.h"
#include <stdio.h>

/**
 * print_arrray - prints n elements of an arraty of integers
 * @a: int array type
 * @n: int type
 * Description: Numbers must be seperated by comma
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i >= 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
