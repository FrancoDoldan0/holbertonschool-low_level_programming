#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
*main - entry point
*
*Return: always (0)
*
*/

int main(void)
{
	int n, e;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	e = n % 10;
	/* your code goes there */

if (e > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, e);
}
if (e == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, e);
}
if else (e < 6 && n != 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, e);
}
	return (0);
}
