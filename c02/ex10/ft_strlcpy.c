unsigned int	ft_strlen(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (str[0] != '\0' && str[++counter] != '\0')
		;
	return (counter);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	x;

	x = 0;
	if (size != '\0')
	{
		while (src[x] != '\0' && x < (size - 1))
		{
			dest[x] = src[x];
			x++;
		}
		dest[x] = '\0';
	}
	return (ft_strlen(src));
}

/*
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char	dest[15];
	char	orig[] = "0dcbsidwhiu";

	printf("%u\n", ft_strlcpy(dest, orig, 5));
	printf("%s\n", dest);

	printf("%zu\n", strlcpy(dest, orig, 5));
	printf("%s\n", dest);
	return (0);
}
*/