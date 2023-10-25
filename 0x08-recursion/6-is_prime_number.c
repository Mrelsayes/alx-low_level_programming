/**
 * prm - returns 1 if the input integer is a prime number, otherwise return 0
 * @n: num
 * @i: count
 * Return: 1 || 0
*/
int prm(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i <= n / 2)
	{
		if (n % i == 0)
			return (0);
		return (prm(n, i + 1));
	}
	else
		return (1);
}

/**
 * is_prime_number - returns 1 if n is a prime number, otherwise 0
 * @n: num
 * Return: 1 || 0
*/
int is_prime_number(int n)
{
	return (prm(n, 2));
}
