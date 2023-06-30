#include "main.h"

int
is_prime_number(int n)
{
	if (n < 0 || n == 1)
	{
		return (0);
	}
	return (is_prime(n, n - 1));
}
int
is_prime(int n, int a)
{
	if (a == 1)
	{
		return (1);
	}
	if (a % n == 0)
	{
		return (0);
	}
	if (a % n != 1)
	{
		return (is_prime(a - 1, n));
	}
	return (0);
}
