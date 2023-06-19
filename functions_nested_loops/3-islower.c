#include <stdio.h>
#include "main.h"

/**
 * _islower - Entry point
 *@c: variable
 * Return: always 0
 *
 *
 */

int
	_islower(int c)
	{
		return (c >= 'a' && c <= 'z');
	}
