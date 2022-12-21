#include "main.h"

/**
 * print_arrray - prints n elements of an arraty of integers
 * @a: int array type
 * @n: int type
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0, n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);

		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
