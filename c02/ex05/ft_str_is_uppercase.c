int	ft_str_is_uppercase(char *str)
{
	int	x;
	int	letter;
	int	only_upper;

	x = 0;
	only_upper = 0;
	while (str[x] != '\0')
	{
		letter = str[x];
		if (letter >= 65 && letter <= 90)
		{
			only_upper = 1;
		}
		else
		{
			only_upper = 0;
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
	printf("%d", ft_str_is_uppercase("123ss"));
	printf("%d", ft_str_is_uppercase("ACFDR"));
	printf("%d", ft_str_is_uppercase("123123"));
	printf("%d", ft_str_is_uppercase(""));
	printf("%d", ft_str_is_uppercase("xxasd"));
	return (0);
}
*/