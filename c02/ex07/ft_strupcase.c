char	*ft_strupcase(char *str)
{
	int	x;
	int	letter;

	x = 0;
	while (str[x] != '\0')
	{
		letter = str[x];
		if ((letter >= 97 && letter <= 122))
		{
			str[x] = letter - 32;
		}
		x++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char original[] = "so 1SletrinAAA peqXXuena";

	printf("ORIGINAL: %s", original);
	printf("\n");
	printf("UPPERCASE: %s", ft_strupcase(original));
	printf("\n");

	return (0);
}
*/