#include <stdlib.h>
#include <time.h>

/* more headers goes there */

/*betty style doc for function main goes there */
/**
 * main - entry point
 *
 * Return: Always 0 (if is success)
 **/

int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	/*
	 * in this part of the code I assign an output for when the given number is
	 * less than n, greater than n and equal to n
	 */

	if (n == 0){

		printf("is zero");
	}

	if (n > 0){
		printf("is positive");
	}

	if (n < 0){
		printf("is negative");
	}

	return (0);
}
