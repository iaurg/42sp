int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// Fake Moulinette
// Recursão precisa de "paradas" dentro de ifs para segurar o retorno
/*
Fibonacci tem os números 0 1 como base e retorna a soma do numero
com uma casa antes e duas casas antes.
0, 1, 1, 2, 3, 5,
*/
/*

#include <stdio.h>

int	main(void)
{
	int res;
	int index;

	index = 0;
	while (index < 12)
	{
		res = ft_fibonacci(index);
		printf ("%d, ", res);
		index++;
	}
	res = ft_fibonacci(index);
	printf ("%d\n", res);
	return (0);
}
*/