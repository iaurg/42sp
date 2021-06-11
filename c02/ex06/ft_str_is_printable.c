int	ft_str_is_printable(char *str)
{
	int	x;
	int	letter;
	int	only_printable;

	x = 0;
	only_printable = 0;
	while (str[x] != '\0')
	{
		letter = str[x];
		if (letter > 31 && letter < 127)
		{
			only_printable = 1;
		}
		else
		{
			only_printable = 0;
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
	printf("%d", ft_str_is_printable(""));
	return (0);
}
*/