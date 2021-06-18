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

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !check_prime(nb))
		nb++;
	return (nb);
}

/*
#include <stdio.h>
int		main(void)
{
	printf("%d\n", ft_find_next_prime(74));
	return (0);
}
*/