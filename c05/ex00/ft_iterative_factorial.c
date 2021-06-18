int	ft_iterative_factorial (int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

/*
O fatorial de um número inteiro e positivo “n”, representado por “n!” é
obtido a partir da multiplicação de todos os seus antecessores até o número um.
*/

/*
#include <stdio.h>
int	main(void)
{
	int n;
	int res;

	n = -5;
	while (n <= 10)
	{
		res = ft_iterative_factorial(n);
		printf("n = %d, n! = %d\n", n, res);
		n++;
	}
	return (0);
}
*/