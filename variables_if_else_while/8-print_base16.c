#include <stdio.h>

/**
 *
 * main - entry point
 *
 * Return: always (0)
 */

int main(void)
{
	int numbers, letters;
	
	for (numbers = 48; numbers <= 57; numbers++)
		{
			putchar(numbers);
		}
	for (letters = 97; letters <= 101; letters++)
		{
			putchar(letters);
		}
		putchar('\n');
		return(0);
}
