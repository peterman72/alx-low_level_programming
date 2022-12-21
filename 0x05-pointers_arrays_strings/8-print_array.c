#include "main.h"

/**
 * print_arrray - prints n elements of an arraty of integers
 * @a: int array type
 * @b: int type
 */
void print_array(int *a, int b)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
