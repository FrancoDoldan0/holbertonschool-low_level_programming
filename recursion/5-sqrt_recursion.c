int
square_root(int n, int a)
{
	if (a * a == n)
		return (a);
	if (a * a > n)
		return (-1);
	return (square_root(n, a + 1));
}

int
_sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square_root(n, 0));
}
