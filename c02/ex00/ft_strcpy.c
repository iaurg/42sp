char	*ft_strcpy(char *dest, char *src)
{
	int	x;

	x = 0;
	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int    main(void)
{
    char original[] = "HELLO WORLD";
    char copied[] = "XXXXX XXXXX";

    printf("FIRST %s", ft_strcpy(copied, original));
    printf("\n");

    printf("COPIED %s", copied);
    printf("\n");

    return (0);
}
*/