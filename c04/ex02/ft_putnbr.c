#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	check_zero(int nb)
{
	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
}

void	max_min_int (void)
{
	write(1, "-2147483648", 11);
	return ;
}

void	ft_putnbr(int nb)
{
	int		divider;
	int		not_zero_first;
	char	digit;

	divider = 1000000000;
	not_zero_first = 0;
	check_zero(nb);
	if (nb == -2147483648)
		max_min_int();
	if (nb < 0 && nb != -2147483648)
	{
		nb *= -1;
		ft_putchar('-');
	}
	while (divider && nb != -2147483648)
	{
		digit = '0' + nb / divider;
		if (digit != '0')
			not_zero_first = 1;
		if (not_zero_first)
			ft_putchar(digit);
		nb = nb % divider;
		divider = divider / 10;
	}
}

// Fake moulinette
/*
#include <limits.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb);

int	main(void)
{
	write(1, "-1: ", 4);
	ft_putnbr(-1);
	write(1, "\n1: ", 4);
	ft_putnbr(1);
	write(1, "\n-10: ", 6);
	ft_putnbr(-10);
	write(1, "\n10: ", 5);
	ft_putnbr(10);
	write(1, "\nINT_MAX: ", 10);
	ft_putnbr(INT_MAX);
	write(1, "\nINT_MIN: ", 10);
	ft_putnbr(INT_MIN);
	write(1, "\n", 1);
	return (0);
}
*/