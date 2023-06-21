#include <stdio.h>

int
main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 15 == 0)
			printf("%s", "FizzBuzz");
		else if (num % 5 == 0)
			printf("%s", "Buzz");
		else if (num % 3 == 0)
			printf("%s", "Fizz");
		else
			printf("%d", num);
		if (num != 100)
			printf(" ");
	}

	putchar('\n');

	return (0);
}
