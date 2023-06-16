#include <stdio.h>
/**
 * main - start
 *
 * Return: always (0)
 **/

int main(void)
{
	int numbers;
	int letters;

	for (numbers = 48; numbers <= 57; numbers++)
	{
		putchar(numbers);
	}
	for (letters = 97; letters <= 102; letters++)
	{
		putchar(letters);
	}
		putchar('\n');
		return (0);
}
