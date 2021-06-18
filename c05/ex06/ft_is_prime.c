int	check_prime (int n)
{
	int	counter;

	counter = 2;
	if (n == 2)
		return (1);
	if (n < 2 || n % 2 == 0)
		return (0);
	while (counter <= n - 1)
	{
		if ((n % counter) == 0)
			return (0);
		counter++;
	}
	return (1);
}

int	ft_is_prime(int nb)
{
	if (check_prime(nb))
		return (1);
	return (0);
}

/*
 Qualquer numero com % == 0 é primo porque este é o resto da divisao, basta
 pularmos o primeiro numero 2 e os pares seguintes.

 Primo só divide por ele mesmo e por 1
*/


#include <stdio.h>
int		main(void)
{
	printf("%d\n", ft_is_prime(2147483647));
	return (0);
}

/*
void	ft_is_prime_test()
{
	int res;
	int counter;
	int primes[17] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37,
	41, 43, 47, 53, 59};

	counter = 0;
	while (counter < 17)
	{
		res = ft_is_prime(primes[counter]);
		if (res != 1)
		{
			printf("[1] KO, %d is a prime number! returned: %d.\n",
			primes[counter], res);
			return ;
		}
		counter++;
	}
	printf("[1] OK.\n");
}

void	ft_is_prime_error_test()
{
	int res;
	int counter;
	int non_primes[17] = {-1, 0, 1, 4, 8, 10, 12, 15, 18, 20, 28,
	30, 36, 40, 42, 48, 54};

	counter = 0;
	while (counter < 17)
	{
		res = ft_is_prime(non_primes[counter]);
		if (res == 1)
		{
			printf("[2] KO, %d is not a prime number! returned: %d\n",
			non_primes[counter], res);
			return ;
		}
		counter++;
	}
	printf("[2] OK.\n");
}

int		main(void)
{
	printf("[1] Testing prime numbers up to 59.\n");
	ft_is_prime_test();
	printf("[2] Testing non-prime numbers up to 54.\n");
	ft_is_prime_error_test();
	return (0);
}
*/