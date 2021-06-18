#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
		ft_putchar (str[counter++]);
}

int	main(int argc, char **argv)
{
	int	counter;

	counter = 1;
	if (argc >= 1)
	{
		while (argc > counter)
		{
			ft_putstr(argv[counter]);
			ft_putchar('\n');
			counter++;
		}
	}
	return (0);
}
