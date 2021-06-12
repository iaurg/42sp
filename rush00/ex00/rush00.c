void	ft_putchar(char c);

void	print_line(int x, char first, char mid, char last)
{
	int	column;

	column = 1;
	while (column <= x)
	{
		if (column == 1)
		{
			ft_putchar(first);
		}
		else if (column == x)
		{
			ft_putchar(last);
		}
		else
		{
			ft_putchar(mid);
		}
		column++;
	}
}

void	check_line(int line, int x, int y)
{
	if (line == 1)
	{
		print_line(x, 'o', '-', 'o');
	}
	else if (line == y)
	{
		print_line(x, 'o', '-', 'o');
	}
	else
	{
		print_line(x, '|', ' ', '|');
	}
}

void	rush(int x, int y)
{
	int	line;

	if (x < 1 || y < 1)
	{
		return ;
	}
	line = 1;
	while (line <= y)
	{
		check_line(line, x, y);
		ft_putchar('\n');
		line++;
	}
}
