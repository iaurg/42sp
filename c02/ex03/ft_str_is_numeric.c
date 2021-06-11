int	ft_str_is_numeric(char *str)
{
	int	x;
	int	letter;
	int	only_numbers;

	x = 0;
	only_numbers = 0;
	while (str[x] != '\0')
	{
		letter = str[x];
		if (letter >= 48 && letter <= 57)
		{
			only_numbers = 1;
		}
		else
		{
			only_numbers = 0;
			return (0);
		}
		x++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_str_is_numeric("s12"));
	return (0);
}
*/
