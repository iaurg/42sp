char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int    ft_strlen(char *str)
{
    int    char_nbr;

    char_nbr = 0;
    while (str[char_nbr] != '\0')
        char_nbr++;
    return (char_nbr);
}

int	main(void)
{
	char            *src;
    char            *dest;
    char            *strcpy;
    unsigned int    srclen;
    char            a[5];
    char            b[5];

    a[0] = 't';
    a[1] = 'e';
    a[2] = 's';
    a[3] = 't';
    a[4] = 'e';
    ft_strncpy(b, a, 3);
    if (b[0] == 't' && b[1] == 'e' && b[2] == 's')
    {
        printf("OK!\n");
    }
    else
    {
        printf("KO!\n");
    }
    src = "Don't panic :)";
    srclen = ft_strlen(src);
    dest = malloc(srclen);
    strcpy = ft_strncpy(dest, src, srclen);
    printf("src:    %s\n", src);
    printf("dest:   %s\n", dest);
    printf("strcpy: %s\n", strcpy);
    printf("\n");
    free(dest);
    return (0);
}
*/