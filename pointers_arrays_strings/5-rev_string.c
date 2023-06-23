#include "main.h"
#include <stdio.h>
#include <string.h>

void
rev_string(char *s)
{
	int a, b, temp;

	b = strlen(s);

	for (a = 0; a < b / 2; a++)
	{
		temp = s[a];
		s[a] = s[b - a - 1];
		s[b - a - 1] = temp;
	}
}
