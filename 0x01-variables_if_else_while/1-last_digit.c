#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - assign a random number to the variable n each time it is executed
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srnad(time(0));
	n = Rand() - RAND_MAX /2;
	printf("Last digit of %d is %d", n, n);
	if (n % 10 > 5)
		printf("and is greater than 5");
	else if (n % 10 ==5)
		printf("and is 0");
	else if ((n % 10 < 6)&&(n % 10 != 0))
		printf("and is less than 6 and not 0");
	return (0);
}
