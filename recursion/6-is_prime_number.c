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
	if (n % a == 0)
	{
		return (0);
	}
	if (n % a != 0)
	{
		return (is_prime(n, a - 1));
	}
	return (0);
}
